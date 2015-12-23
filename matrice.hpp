#include <SFML/Graphics.hpp>
#include "cell.hpp"
const int NB_CELL = 50;

class Matrice{

	sf::RenderWindow* window;
	Cell* mat[NB_CELL][NB_CELL];
	
public:
	Matrice(sf::RenderWindow* w);	
	

};
