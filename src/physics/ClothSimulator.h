//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_CLOTHSIMULATOR_H
#define CLOTH_CLOTHSIMULATOR_H

#include "Cloth.h"
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>

class ClothSimulator
{
  private:
    std::vector<float> dist_to_point(Particle& p1, Particle& p2);
    std::vector<float> damping_force = { 0.f, 0.f, 0.f };

    void apply_stiffness_force(Particle& p1);
    void apply_gravity(Particle& point);
    void apply_oscilator_damping(Particle& p);

  public:
    ClothSimulator() = default;
    ClothSimulator(Cloth& cloth);

    Cloth cloth;

    float gravity_accn = 200;

    void set_fixed_nodes(const std::vector<int>& fixed_nodes);
    void calculate_undeformed_distances();

    void forwards_euler_step(float delta_t);
    void velocity_verlet_step(float delta_t);

    void apply_force(std::vector<float>& force, Particle& p);
    void apply_force_to_all(std::vector<float>& force);

    void write_solution_to_file(int nstep);
};

#endif // CLOTH_CLOTHSIMULATOR_H
