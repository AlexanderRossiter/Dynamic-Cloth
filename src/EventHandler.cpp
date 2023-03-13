#include "EventHandler.h"

void
EventHandler::check_events(sf::RenderWindow& app, ClothSimulator& cs)
{

  while (app.pollEvent(event)) {
    if (event.type == sf::Event::Closed)
      app.close();

    // catch the resize events
    if (event.type == sf::Event::Resized) {
      // update the view to the new size of the window
      sf::FloatRect visibleArea(
        0.f, 0.f, (float)event.size.width, (float)event.size.height);
      app.setView(sf::View(visibleArea));
    }

    // Remove a point if we click near it.
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
      sf::Vector2i localPosition = sf::Mouse::getPosition(app);
      for (size_t ii = 0; ii < cs.cloth.points.size(); ii++) {
        Particle& p = cs.cloth.points.at(ii);
        if (std::abs(localPosition.x - p.x) < 5 &&
            std::abs(localPosition.y - p.y) < 5) {
          cs.cloth.remove_particle(ii);
        }
      }
    }
  }
}