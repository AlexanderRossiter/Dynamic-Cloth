# Dynamic-Cloth

A program written in C++ for performing cloth simulations. 

## Method
This program uses a 'mass spring' method for simulating the cloth, with the cloth taking the form of an array of point masses connected by springs. The positions of the points are specified in an input file 'cloth_points' and each point's neighbours are specified in 'cloth_connectivity'. This allows for the size and number of connections for each point to be read in.

The basic ['damped oscialator'](https://en.wikipedia.org/wiki/Mass-spring-damper_model) second order system is solved. Time integration is performed using the [velocity verlet](https://en.wikipedia.org/wiki/Verlet_integration) method, although provision is also made for forwards Euler.

