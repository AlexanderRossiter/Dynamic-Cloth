#pragma once

#include <SFML/Graphics.hpp>

#include "Cloth.h"
#include "ClothLoader.h"
#include "ClothSimulator.h"
#include "EventHandler.h"

class App
{
  private:
    std::string m_app_name;

    uint32_t m_scr_width;
    uint32_t m_scr_height;
    uint32_t m_framrate_limit;

    ClothLoader      m_cloth_loader;
    sf::RenderWindow m_window;
    EventHandler     m_event_handler;

    Cloth          m_cloth;
    ClothSimulator m_cloth_simulator;

  private:
    void set_fixed_points();

  public:
    // Constructors
    App(const std::string& app_name);
    App(const std::string& app_name, uint32_t scr_width, uint32_t scr_height);
    ~App() = default;

    // No copy or move.
    App(App& app) = delete;
    App(App&& app) = delete;

    App& operator=(App& app) = delete;
    App& operator=(App&& app) = delete;

  public:
    void run();
    void init();
};