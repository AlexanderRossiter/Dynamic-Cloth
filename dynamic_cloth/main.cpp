#include <SFML/Graphics.hpp>
#include <iostream>
#include "physics/ClothLoader.h"
#include "physics/Cloth.h"
#include "physics/ClothSimulator.h"

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    sf::RenderWindow app(sf::VideoMode(SCR_WIDTH, SCR_HEIGHT), "SFML works!");
    app.setFramerateLimit(60);

    // Load the cloth.
    ClothLoader cl;
    Cloth cloth = cl.load_cloth_from_file("./");
    cloth.set_stiffness(200.f);
    cloth.set_damping(5.0f);
    
    ClothSimulator cs(cloth);
    cs.set_fixed_nodes(std::vector<int> {0, 29});

    cs.calculate_undeformed_distances();

    sf::Clock clock;


    float simulator_deltaT = 0.0005;
    float left_over_time = 0;
    int loop_no = 0;
    while (app.isOpen())
    {

        sf::Time elapsed_time = clock.getElapsedTime();
        clock.restart();

        int n = (elapsed_time.asSeconds()+left_over_time) / simulator_deltaT;
        left_over_time = elapsed_time.asSeconds() - n * simulator_deltaT;


        for (int nstep = 0; nstep < n; nstep++) {
            cs.verlet_step(simulator_deltaT);
        }

        //std::cout << left_over_time << std::endl;

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
        }

        app.clear();
        cs.cloth.draw(app);
        app.display();
        loop_no++;
        //std::cout << "Loop\n";
    }

    return 0;
}