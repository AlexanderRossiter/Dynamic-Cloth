#include <SFML/Graphics.hpp>
#include <iostream>
#include "physics/ClothLoader.h"
#include "physics/Cloth.h"
#include "physics/ClothSimulator.h"
#include <cmath>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

int main()
{
    sf::RenderWindow app(sf::VideoMode(SCR_WIDTH, SCR_HEIGHT), "Cloth Simulation");
    app.setFramerateLimit(30);

    // Load the cloth.
    ClothLoader cl;
    Cloth cloth = cl.load_cloth_from_file("./");
    cloth.set_stiffness(1000.f);
    cloth.set_damping(1.f);
    
    ClothSimulator cs(cloth);

    std::vector<int> nodes;
    for (int i = 0; i < 50; i += 10) {
        nodes.push_back(i);
    }
    nodes.push_back(49);

    cs.set_fixed_nodes(nodes);

    cs.calculate_undeformed_distances();


    sf::Clock clock;

    float simulator_deltaT = 0.0005;
    float left_over_time = 0;
    float total_elapsed_time = 0;
    int loop_no = 0;

    std::vector<float> wind = { 0.f, 0.f, 0.f };
    while (app.isOpen())
    {
        // Time keeping
        sf::Time elapsed_time = clock.getElapsedTime();
        clock.restart();
        float elapsed_time_sec = elapsed_time.asSeconds();
        int n = (elapsed_time_sec +left_over_time) / simulator_deltaT;
        left_over_time = elapsed_time_sec - n * simulator_deltaT;
        float fps = 1.0f / elapsed_time_sec;
        //std::cout << fps << std::endl;
        
        // The Physics steps
        for (int nstep = 0; nstep < n; nstep++) {
            cs.velocity_verlet_step(simulator_deltaT);
            total_elapsed_time += simulator_deltaT;
           
            wind[0] = 50.0f * std::sin(total_elapsed_time / 0.5f);
            cs.apply_force_to_all(wind);
        }

        // Events
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();

            // catch the resize events
            if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                app.setView(sf::View(visibleArea));
            }

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                sf::Vector2i localPosition = sf::Mouse::getPosition(app);

                for (int ii = 0; ii < cs.cloth.points.size(); ii++) {
                    Particle& p = cs.cloth.points.at(ii);
                    if (std::abs(localPosition.x - p.x) < 5 && std::abs(localPosition.y - p.y) < 5) {
                        cs.cloth.remove_particle(ii);
                    }
                }


            }

            
        }

        app.clear();
        cs.cloth.draw(app);
        app.display();
        loop_no++;
    }

    return 0;
}