#include "cell.hpp"

cell::cell(int posx, int posy){
	rectangle.setSize(sf::Vector2f(120, 50));
	rectangle.setFillColor(sf::Color::Black);
	etat = false;
	this->posx = posx;
	this->posy = posy;
}

sf::RectangleShape* forme(){
	return &rectangle;
}
