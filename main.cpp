#include <SFML/Graphics.hpp>
#include "matrice.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(NB_CELL*CELL_SZ, NB_CELL*CELL_SZ), "Automate cellulaire");
  Matrice mat(&window, false);
  mat.init_true(5,6);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
	  {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	
	window.clear(sf::Color::Black);
	mat.update();
    }


    return 0;
}
