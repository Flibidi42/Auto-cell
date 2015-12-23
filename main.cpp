#include <SFML/Graphics.hpp>
#include "cell.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
	  {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	Cell cellule(20, 20);
	window.clear(sf::Color::Black);
	cellule.change(true);
	window.draw(*(cellule.forme()));
	window.display();
    }


    return 0;
}
