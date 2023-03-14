#pragma once
#include "ClothSimulator.h"
#include <SFML/Graphics.hpp>

class EventHandler
{
  public:
    EventHandler() = default;
    void check_events(sf::RenderWindow& app, ClothSimulator& cs);

  private:
    sf::Event event;
};
