#include<SFML/Graphics.hpp>

const int CELL_SZ= 10;

class cell{
	sf::RectangleShape rectangle;
	bool etat;
	int posx;
	int posy;

public:

	cell(int posx, int posy);
	sf::RectangleShape* forme();
	void change(bool new_etat);
};
