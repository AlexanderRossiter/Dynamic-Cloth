#include "App.h"

App::App(const std::string& app_name) :
    m_app_name(app_name),
    m_scr_width(800),
    m_scr_height(800),
    m_framrate_limit(30),
    m_cloth_loader(),
    m_window(sf::VideoMode{ m_scr_width, m_scr_height }, m_app_name),
    m_event_handler()
{
    init();
}

App::App(const std::string& app_name, uint32_t scr_width, uint32_t scr_height) :
    m_app_name(app_name),
    m_scr_width(scr_width),
    m_scr_height(scr_height),
    m_framrate_limit(30),
    m_cloth_loader(),
    m_window(sf::VideoMode{ m_scr_width, m_scr_height }, m_app_name),
    m_event_handler()
{
    init();
}

void
App::set_fixed_points()
{
    // Currently hard-coded...
    std::vector<int> nodes;
    for (int i = 0; i < 50; i += 10) {
        nodes.push_back(i);
    }
    nodes.push_back(49);
    m_cloth_simulator.set_fixed_nodes(nodes);
}

void
App::init()
{
    m_window.setFramerateLimit(m_framrate_limit);
    m_cloth = m_cloth_loader.load_cloth_from_file("./");
    m_cloth.set_stiffness(2000.f);
    m_cloth.set_damping(3.f);

    m_cloth_simulator = ClothSimulator{ m_cloth };
    set_fixed_points();

    m_cloth_simulator.calculate_undeformed_distances();
}

void
App::run()
{
    // Wind vector
    std::vector<float> wind = { 0.f, 0.f, 0.f };
    float wind_time_period = 0.5f;

    sf::Clock clock;
    float simulator_deltaT = 0.0005f;
    float left_over_time = 0.f;
    float total_elapsed_time = 0.f;
    // Main loop
    while (m_window.isOpen()) {
        sf::Time elapsed_time = clock.getElapsedTime();
        clock.restart();
        float elapsed_time_sec = elapsed_time.asSeconds();
        int n = (int)((elapsed_time_sec + left_over_time) / simulator_deltaT);
        left_over_time = elapsed_time_sec - n * simulator_deltaT;

        // The Physics steps
        for (int nstep = 0; nstep < n; nstep++) {
            m_cloth_simulator.velocity_verlet_step(simulator_deltaT);
            total_elapsed_time += simulator_deltaT;

            wind[0] = 50.0f * std::sin(total_elapsed_time / wind_time_period);
            m_cloth_simulator.apply_force_to_all(wind);
        }

        // Events
        m_event_handler.check_events(m_window, m_cloth_simulator);

        m_window.clear();
        m_cloth_simulator.cloth.draw(m_window);
        m_window.display();
    }
}