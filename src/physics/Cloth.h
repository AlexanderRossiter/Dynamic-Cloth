//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_CLOTH_H
#define CLOTH_CLOTH_H

#include "Particle.h"
#include "util.h"
#include <SFML/Graphics.hpp>
#include <algorithm>
#include <iostream>
#include <vector>

class Cloth
{
  private:
    std::vector<float> rgb = { 0.f, 0.f, 0.f };

  public:
    Cloth();

    // TODO
    // I don't really like that these are public.
    float stiffness;
    float damping;
    float max_force;
    std::vector<Particle> points;
    std::vector<int> point_idicies;
    int np;

    void print_cloth_coords();
    void print_cloth_connectivity();

    void set_stiffness(float stiffness);
    void set_damping(float damping);
    void draw(sf::RenderWindow& window);
    void remove_particle(int idx);
};

#endif // CLOTH_CLOTH_H
