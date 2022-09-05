//
// Created by adr39 on 16/08/2022.
//

#include "ClothSimulator.h"

ClothSimulator::ClothSimulator(Cloth& cloth) : cloth(cloth) {}

ClothSimulator::~ClothSimulator() {}


void ClothSimulator::apply_gravity(Particle& point) {
    point.yacc += gravity_accn;
}

void ClothSimulator::apply_force(std::vector<float>& force, Particle& p) {
    p.xacc += force[0] / p.mass;
    p.yacc += force[1] / p.mass;
    p.zacc += force[2] / p.mass;
}

void ClothSimulator::apply_force_to_all(std::vector<float>& force) {
    for (Particle& p : cloth.points) {
        p.xacc += force[0] / p.mass;
        p.yacc += force[1] / p.mass;
        p.zacc += force[2] / p.mass;
    }

}


void ClothSimulator::apply_oscilator_damping(Particle& p) {
    damping_force[0] = -p.xvel * cloth.damping;
    damping_force[1] = -p.yvel * cloth.damping;
    damping_force[2] = -p.zvel * cloth.damping;

    apply_force(damping_force, p);
}



void ClothSimulator::apply_stiffness_force(Particle& p1) {
    // Calculate stiffness forces
    for (int ii = 0; ii < p1.neighbours.size(); ii++) {
        int neighbour_idx = p1.neighbours.at(ii);
        Particle& p2 = cloth.points.at(neighbour_idx);

        float dx = p2.x - p1.x;
        float dy = p2.y - p1.y;
        float dz = p2.z - p1.z;
        float distance = std::sqrt(dx * dx + dy * dy + dz * dz);

        float undeformed_distance = p1.undeformed_distance_to_neighbours.at(ii);

        float xdir = dx / distance;
        float ydir = dy / distance;
        float zdir = dz / distance;

        float spring_force = (distance - undeformed_distance) * cloth.stiffness;
        p1.forces.at(ii) = spring_force;
        //std::cout << p1.forces.at(ii) << std::endl;

        //spring_force = spring_force > cloth.max_force ? cloth.max_force : spring_force;

        p1.xacc += xdir * spring_force / p1.mass;
        p1.yacc += ydir * spring_force / p1.mass;
        p1.zacc += zdir * spring_force / p1.mass;
    }
    
}

void ClothSimulator::set_fixed_nodes(const std::vector<int>& fixed_nodes) {
    for (int idx : fixed_nodes) {
        cloth.points.at(idx).is_fixed = true;
    }
}



void ClothSimulator::velocity_verlet_step(float delta_t) {
    for (int p_idx : cloth.point_idicies) {
        Particle& point = cloth.points.at(p_idx);
        if (!point.is_fixed) {
            point.x = point.x + point.xvel * delta_t + 0.5f * point.xacc * delta_t * delta_t;
            point.y = point.y + point.yvel * delta_t + 0.5f * point.yacc * delta_t * delta_t;
            point.z = point.z + point.zvel * delta_t + 0.5f * point.zacc * delta_t * delta_t;
        }

        float x_tmp = point.xacc;
        float y_tmp = point.yacc;
        float z_tmp = point.zacc;

        point.xacc = 0;
        point.yacc = 0;
        point.zacc = 0;

        apply_stiffness_force(point);
        apply_gravity(point);
        apply_oscilator_damping(point);

        point.xvel = point.xvel + 0.5f * (point.xacc + x_tmp) * delta_t;
        point.yvel = point.yvel + 0.5f * (point.yacc + y_tmp) * delta_t;
        point.zvel = point.zvel + 0.5f * (point.zacc + z_tmp) * delta_t;


        
    }

}

void ClothSimulator::forwards_euler_step(float delta_t) {
    // A forwards euler method for the cloth simulation.
    for (Particle& point : cloth.points) {
        if (!point.is_fixed) {
            // Calculate stiffness forces
            point.xacc = 0;
            point.yacc = 0;
            point.zacc = 0;
            apply_stiffness_force(point);
            apply_gravity(point);
            apply_oscilator_damping(point);



            point.xvel = point.xvel + point.xacc * delta_t;
            point.yvel = point.yvel + point.yacc * delta_t;
            point.zvel = point.zvel + point.zacc * delta_t;

            float x_tmp = point.x;
            float y_tmp = point.y;
            float z_tmp = point.z;

            point.x = point.x + point.xvel * delta_t;
            point.y = point.y + point.yvel * delta_t;
            point.z = point.z + point.zvel * delta_t;

            point.x_old = x_tmp;
            point.y_old = y_tmp;
            point.z_old = z_tmp;
        }
    }

}

std::vector<float> ClothSimulator::dist_to_point(Particle &p1, Particle &p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float dz = p2.z - p1.z;

    return std::vector<float> { dx, dy, dz };
}

void ClothSimulator::write_solution_to_file(int nstep) {
    std::ofstream file;
    std::string fname = "./solution/nstep_" + std::to_string(nstep);

    file.open(fname);

    for (Particle& point : cloth.points) {
        file << std::setprecision(6) << point.x << "," << point.y << "," << point.z << std::endl;
    }

    file.close();
}

void ClothSimulator::calculate_undeformed_distances() {
    for (Particle& point : cloth.points) {
        for (int neighbour_idx: point.neighbours) {
            Particle &neighbour = cloth.points.at(neighbour_idx);
            std::vector<float> distance_vector = ClothSimulator::dist_to_point(point, neighbour);
            point.undeformed_distance_to_neighbours_vectors.push_back(distance_vector);
            point.undeformed_distance_to_neighbours.push_back(util::vector_magnitude(distance_vector));
            point.neighbour_drawn.insert({neighbour_idx, false});
            point.forces.push_back(0.0f);
            point.previous_colours.push_back(std::vector<int> {0, 255, 0});
        }
    }
}

