#include "matrice.hpp"

Matrice::Matrice(sf::RenderWindow* w, bool init = false){
	
	window = w;
	for(int i = 0; i< NB_CELL; i++){
		for(int j = 0; j< NB_CELL; j++){
			tab[i][j] = new Cell(i*CELL_SZ, j*CELL_SZ);
			tab[i][j]->change(init);
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

void Matrice::init_true(int i, int j){
	
	tab[i][j]->change(true);
}
