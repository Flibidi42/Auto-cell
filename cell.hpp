#include <SFML/Graphics.hpp>

const int CELL_SZ= 10;

class Cell{
	sf::RectangleShape rectangle;
	bool etat;
	int posx;
	int posy;

public:

	Cell(int posx, int posy);
	sf::RectangleShape* forme();
	void change(bool new_etat);
};
