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
    Cloth::max_force = stiffness * 5;
}

void Cloth::set_damping(float damping) {
    Cloth::damping = damping;
}

void Cloth::draw(sf::RenderWindow& window) {
    for (Particle& p : points) {
        for (size_t ii = 0; ii < p.neighbours.size(); ii++) {
            int neighbour_idx = p.neighbours.at(ii);
            Particle& neighbour = points.at(neighbour_idx);

            if (!p.neighbour_drawn[ii]) {
                neighbour.neighbour_drawn[p.idx] = true;
                
                float x = std::min(std::abs(p.forces.at(ii)) / max_force,1.0f);
                float h = (1.f - x) * 135.f;
                util::HSV_to_RGB(h, 0.7f, 1.0f, rgb);
                
                int r = (int)(rgb[0] * 255);
                int g = (int)(rgb[1] * 255);
                int b = (int)(rgb[2] * 255);

                //std::cout << h << std::endl;

                //float r = std::min(2.0f * x, 1.0f) * 200.f;
                //float g = std::min(2.0f * (1-x), 1.0f) * 200.f;
                //int b = 0;

                sf::Vertex line[] = {
                    sf::Vertex(sf::Vector2f(p.x, p.y), sf::Color(r,g,b)),
                    sf::Vertex(sf::Vector2f(neighbour.x, neighbour.y), sf::Color(r,g,b))
                };
                window.draw(line, 2, sf::Lines);
            }
        }
    }
}

void Cloth::remove_particle(int idx) {
    Particle& p = points.at(idx);
    std::cout << "Point removed at index " << idx << std::endl;

    for (size_t i = 0; i < p.neighbours.size(); i++) {
        Particle& n = points.at(p.neighbours.at(i));
        std::vector<int>::iterator it = std::find(n.neighbours.begin(), n.neighbours.end(), idx);
        if (it != n.neighbours.end()) {
            n.neighbours.erase(it);
            size_t rmv_idx = it - n.neighbours.begin();
            n.undeformed_distance_to_neighbours.erase(n.undeformed_distance_to_neighbours.begin() + rmv_idx);
        }
       /* n.neighbours.erase(std::remove(n.neighbours.begin(), n.neighbours.end(), idx), n.neighbours.end());*/
        std::cout << "Neighbour " << i << ": " << util::vector_to_string(n.neighbours) << std::endl;
    }
    p.neighbours.clear();
}


#endif // !CLOTH_H

