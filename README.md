# Dynamic-Cloth

A program written in C++ for performing cloth simulations. 

## Method
This program uses a 'mass spring' method for simulating the cloth, with the cloth taking the form of an array of point masses connected by springs. The positions of the points are specified in an input file 'cloth_points' and each point's neighbours are specified in 'cloth_connectivity'. This allows for the size and number of connections for each point to be read in.

The basic ['damped oscialator'](https://en.wikipedia.org/wiki/Mass-spring-damper_model) second order system is solved. Time integration is performed using the [velocity verlet](https://en.wikipedia.org/wiki/Verlet_integration) method, although provision is also made for forwards Euler.

<img src="/dynamic_cloth/images/cloth_sim.png" width="300" height="300">

Points can be removed while the simulation runs to generate gaps in the cloth.

<img src="/dynamic_cloth/images/cloth_sim_holes.png" width="300" height="300">


## Visualisation
Rendering to the screen is performed with the SFML graphics library. The force magnitude is visualised by the colour of the links, with green representing lower magnitudes and red representing higher magnitudes.


