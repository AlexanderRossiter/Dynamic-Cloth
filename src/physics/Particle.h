//
// Created by adr39 on 16/08/2022.
//

#ifndef CLOTH_PARTICLE_H
#define CLOTH_PARTICLE_H

#include <memory>
#include <unordered_map>
#include <vector>
class Particle
{
public:
  Particle(float x, float y, float z, float mass);

  virtual ~Particle();

  // TODO
  // Do these really need to be public?
  float x;
  float y;
  float z;

  float x_old;
  float y_old;
  float z_old;

  float xvel = 0;
  float yvel = 0;
  float zvel = 0;

  float xacc = 0;
  float yacc = 0;
  float zacc = 0;

  float mass;
  bool is_fixed = false;

  int idx;

  std::vector<int> neighbours;
  std::vector<std::vector<float>> undeformed_distance_to_neighbours_vectors;
  std::vector<float> undeformed_distance_to_neighbours;
  std::unordered_map<int, bool> neighbour_drawn;
  std::vector<float> forces;
  std::vector<std::vector<int>> previous_colours;
};

#endif // CLOTH_PARTICLE_H
