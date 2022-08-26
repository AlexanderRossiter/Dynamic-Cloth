#ifndef CLOTH_H
#define CLOTH_H


#include "Cloth.h"


Cloth::Cloth() {}
Cloth::~Cloth() {

}

void Cloth::print_cloth_coords() {
    for (const Particle& c : points) {
        std::cout << "(" << c.x << ", " << c.y << ", " << c.z << ")" << std::endl;
    }
}

void Cloth::print_cloth_connectivity() {
    for (const Particle& c : points) {
        std::cout << util::vector_to_string(c.neighbours) << std::endl;
    }
}

void Cloth::set_stiffness(float stiffness) {
    Cloth::stiffness = stiffness;
}

void Cloth::set_damping(float damping) {
    Cloth::damping = damping;
}

void Cloth::draw(sf::RenderWindow& window) {
    for (Particle& p : points) {
        for (int ii = 0; ii < p.neighbours.size(); ii++) {
            int neighbour_idx = p.neighbours.at(ii);
            Particle& neighbour = points.at(neighbour_idx);

            sf::Vertex line[] = {
                sf::Vertex(sf::Vector2f(p.x, p.y)),
                sf::Vertex(sf::Vector2f(neighbour.x, neighbour.y))
            };

            window.draw(line, 2, sf::Lines);
        }
    }
}


#endif // !CLOTH_H

