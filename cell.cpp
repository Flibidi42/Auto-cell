#include "cell.hpp"

Cell::Cell(int posx, int posy){
	rectangle.setSize(sf::Vector2f(CELL_SZ, CELL_SZ));
	rectangle.setFillColor(sf::Color::Black);
	etat = false;
	this->posx = posx;
	this->posy = posy;
	rectangle.setPosition(posx, posy);
}

sf::RectangleShape* Cell::forme(){
	return &rectangle;
}

bool Cell::etat()
	return etat;

void Cell::change(bool new_etat){
	if(new_etat == etat)
		return;
	if(new_etat == false){ // cas où on change la valeur à false
		etat = false;
		rectangle.setFillColor(sf::Color::Black);
	}
	else{
		etat = true;
		rectangle.setFillColor(sf::Color::White);
	}
			
}

bool Cell::calcul(const bool voisins[8], bool etat_cell){
	int nb_vivant = 0;
	for(int i = 0; i<8; i++){
		if(voisins[i])
			nb_vivant++;
	}
	if(

}











