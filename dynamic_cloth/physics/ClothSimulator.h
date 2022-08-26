//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_CLOTHSIMULATOR_H
#define CLOTH_CLOTHSIMULATOR_H


#include "Cloth.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <algorithm>

class ClothSimulator {
private:
    std::vector<float> dist_to_point(Particle& p1, Particle& p2);

public:
    explicit ClothSimulator(Cloth &cloth);
    virtual ~ClothSimulator();

    Cloth cloth;

    float gravity_accn = 50;

    void set_fixed_nodes(const std::vector<int>& fixed_nodes);
    void forwards_euler_step(float delta_t);

    void write_solution_to_file(int nstep);
    void calculate_undeformed_distances();

    void verlet_step(float delta_t);

    void apply_stiffness_force(Particle &point);

    void apply_gravity(Particle &point);

    void apply_force(std::vector<float>& force, Particle& p);

    void apply_damping(Particle &p, float delta_t);
};


#endif //CLOTH_CLOTHSIMULATOR_H
