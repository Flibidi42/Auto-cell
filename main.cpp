#include <SFML/Graphics.hpp>
#include "matrice.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(NB_CELL*CELL_SZ, NB_CELL*CELL_SZ), "Automate cellulaire");
  Matrice mat(&window, false);
  window.clear(sf::Color::Black);
  sf::Clock horloge;
  bool go = false;
  bool init_enable = true;
  int posx = 0, posy = 0;
  
    while (window.isOpen())
    {
        if(horloge.getElapsedTime().asMilliseconds() >= 500 && go){
        	mat.next();
		horloge.restart();
        }
        sf::Event event;
        while (window.pollEvent(event))
	  {
	   switch(event.type){
           	case sf::Event::Closed:
                	window.close();
                	break;
                case (sf::Event::KeyPressed):
         		if(event.key.code == sf::Keyboard::Return){
         			go = true;
         			init_enable = false;
         		}
         		else if(event.key.code == sf::Keyboard::R){
         			go = false;
         			init_enable = true;
         			mat.reset();
         		}
         	break;
         	case(sf::Event::MouseButtonPressed):
         		if(event.mouseButton.button == sf::Mouse::Left && init_enable){
         			posx = event.mouseButton.x/CELL_SZ;
         			posy = event.mouseButton.y/CELL_SZ;
         			mat.init_true(posx, posy);
         			mat.update();
         		}
         		if(event.mouseButton.button == sf::Mouse::Right && init_enable){
         			posx = event.mouseButton.x/CELL_SZ;
         			posy = event.mouseButton.y/CELL_SZ;
         			mat.init_false(posx, posy);
         			mat.update();
         		}
         		
           }		
                
        }
	
    }

    return 0;
}
