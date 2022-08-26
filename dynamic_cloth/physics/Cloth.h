//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_CLOTH_H
#define CLOTH_CLOTH_H

#include "Particle.h"
#include <vector>
#include "../util.h"
#include <iostream>
#include <SFML/Graphics.hpp>



class Cloth {
private:


public:
    Cloth();
    virtual ~Cloth();

    std::vector<Particle> points;
    int np;
 
    void print_cloth_coords();
    void print_cloth_connectivity();
    float stiffness;
    float damping;

    void set_stiffness(float stiffness);
    void set_damping(float damping);
    void draw(sf::RenderWindow& window);


};

#endif //CLOTH_CLOTH_H
