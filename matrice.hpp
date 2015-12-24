#include <SFML/Graphics.hpp>
#include "cell.hpp"
const int NB_CELL = 50;

class Matrice{

	sf::RenderWindow* window;
	Cell* tab[NB_CELL][NB_CELL];
	
public:
	Matrice(sf::RenderWindow* w, bool init);	
	void update();
	void init_true(int i, int j);
	void next();
	~Matrice();
	
};
