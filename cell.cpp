#include "cell.hpp"

cell::cell(int posx, int posy){
	rectangle.setSize(sf::Vector2f(120, 50));
	rectangle.setFillColor(sf::Color::Black);
	etat = false;
	this->posx = posx;
	this->posy = posy;
}

sf::RectangleShape* cell::forme(){
	return &rectangle;
}

void cell::change(bool new_etat){
	if(new_etat == etat)
		return;
	if(new_etat == false){ // cas où on change la valeur à false
		etat = false;
		rectangle.setFillColor(sf::Color::White);
	}
	else{
		etat = true;
		rectangle.setFillColor(sf::Color::Black);
	}
			
}
