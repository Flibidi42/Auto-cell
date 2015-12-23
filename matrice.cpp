#include "matrice.hpp"

Matrice::Matrice(sf::RenderWindow* w){
	
	window = w;
	for(int i = 0; i< NB_CELL; i++){
		for(int j = 0; j< NB_CELL; j++){
			tab[i][j] = new Cell(i*CELL_SZ, j*CELL_SZ);
			window->draw(*(tab[i][j]->forme()));
		}
	}
	window->display();
	
}

void Matrice::update(){

	for(int i = 0; i< NB_CELL; i++){
		for(int j = 0; j< NB_CELL; j++){
			window->draw(*(tab[i][j]->forme()));
		}
	}
	window->display();
}
