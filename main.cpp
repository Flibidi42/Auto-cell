#include <SFML/Graphics.hpp>
#include "matrice.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(NB_CELL*CELL_SZ, NB_CELL*CELL_SZ), "Automate cellulaire");
  Matrice mat(&window, false);
  mat.init_true(6,5);
  mat.init_true(6,6);
  mat.init_true(6,7);
  mat.init_true(7,6);
  mat.init_true(5,6);
  sf::Clock horloge;
  
    while (window.isOpen())
    {
        sf::Event event;
        if(horloge.getElapsedTime().asMilliseconds() >= 500 && go){
        	mat.next();
		mat.update();
		horloge.restart();
        }
        while (window.pollEvent(event))
	  {
            switch (event.type == sf::Event::Closed)
                window.close();
        }
	
    }

    return 0;
}
