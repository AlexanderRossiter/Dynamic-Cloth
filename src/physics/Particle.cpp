#include "Particle.h"

#ifndef COORDINATE_H
#define COORDINATE_H

#endif // !COORDINATE_H

Particle::Particle(float x, float y, float z, float mass)
  : x(x)
  , y(y)
  , z(z)
  , mass(mass)
  , x_old(x)
  , y_old(y)
  , z_old(z)
{
}

Particle::~Particle() {}
