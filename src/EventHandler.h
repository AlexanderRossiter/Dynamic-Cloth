#pragma once
#include <SFML/Graphics.hpp>
#include "ClothSimulator.h"

class EventHandler
{
public:
	void check_events(sf::RenderWindow& app, ClothSimulator& cs);

private:
	sf::Event event;

};

