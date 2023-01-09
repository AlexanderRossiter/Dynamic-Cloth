#include <SFML/Graphics.hpp>
#include <iostream>
#include "physics/ClothLoader.h"
#include "physics/Cloth.h"
#include "physics/ClothSimulator.h"
#include "EventHandler.h"
#include <cmath>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

int main()
{
    // TODO
    // Wrap this whole thing into an App class. Then main can just call app.init() app.run().
    sf::RenderWindow window(sf::VideoMode(SCR_WIDTH, SCR_HEIGHT), "Cloth Simulation");
    window.setFramerateLimit(30);

    // Load the cloth.
    ClothLoader cl;
    Cloth cloth = cl.load_cloth_from_file("./");
    cloth.set_stiffness(1000.f);
    cloth.set_damping(1.f);
    
    // Create the pyhsics engine.
    ClothSimulator cs(cloth);

    // Setting fixed points.
    // TODO Get rid of this horrible hard coding. Might be goood to
    // read from file or something?
    std::vector<int> nodes;
    for (int i = 0; i < 50; i += 10) {
        nodes.push_back(i);
    }
    nodes.push_back(49);
    cs.set_fixed_nodes(nodes);

    // Calculate the 'spring' resting lengths.
    cs.calculate_undeformed_distances();

    // Wind vector
    std::vector<float> wind = { 0.f, 0.f, 0.f };
    float wind_time_period = 0.5f;

    sf::Clock clock;
    float simulator_deltaT = 0.0005f;
    float left_over_time = 0.f;
    float total_elapsed_time = 0.f;
    int loop_no = 0;

    EventHandler eventHandler;

    // Main loop.
    while (window.isOpen())
    {
        // Time keeping
        sf::Time elapsed_time = clock.getElapsedTime();
        clock.restart();
        float elapsed_time_sec = elapsed_time.asSeconds();
        int n = (int)((elapsed_time_sec + left_over_time) / simulator_deltaT);
        left_over_time = elapsed_time_sec - n * simulator_deltaT;
        float fps = 1.0f / elapsed_time_sec;
        
        // The Physics steps
        for (int nstep = 0; nstep < n; nstep++) {
            cs.velocity_verlet_step(simulator_deltaT);
            total_elapsed_time += simulator_deltaT;
           
            wind[0] = 50.0f * std::sin(total_elapsed_time / wind_time_period);
            cs.apply_force_to_all(wind);
        }

        // Events
        eventHandler.check_events(window, cs);
        
        window.clear();
        cs.cloth.draw(window);
        window.display();
        loop_no++;
    }

    return 0;
}