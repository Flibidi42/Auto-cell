#include "matrice.hpp"

Matrice::Matrice(sf::RenderWindow* w, bool init = false){
	
	window = w;
	for(int i = 0; i< NB_CELL; i++){
		for(int j = 0; j< NB_CELL; j++){
			tab[i][j] = new Cell(i*CELL_SZ, j*CELL_SZ); // i>x  j>y
			tab[i][j]->change(init);
			window->draw(*(tab[i][j]->forme()));
		}
	}
	window->display();
	
}

Matrice::~Matrice(){
	for(int i = 0; i< NB_CELL; i++){
		for(int j = 0; j< NB_CELL; j++){
			delete tab[i][j];
		}
	}
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

/*courant[k-1][l-1], courant[k-1][l], courant[k-1][l+1], courant[k][l-1], courant[k][l+1], courant[k+1][l-1], courant[k+1][l], courant[k+1][l+1]*/

void Matrice::next(){
	bool voisins[8];
	int k = 1, l = 1;
	bool courant[NB_CELL+2][NB_CELL+2]; // ce tableau contient l'etat courant avec un bordure de false pour les effets de bords
	for(int i = 0; i<NB_CELL+2; i++){
		for(int j = 0; j< NB_CELL+2; j++){
			if(i>0 && i<NB_CELL+1 && j>0 && j<NB_CELL+1)
				courant[i][j] = tab[i][j]->get_etat();
			else // bordure à false
				courant[i][j] = false;
		}
	}
	bool suivant[NB_CELL][NB_CELL]; // celui-ci contiendra l'iteration suivante
	for(int i = 0; i< NB_CELL; i++){
		
		for(int j = 0; j< NB_CELL; j++){
			voisins[0] = courant[k-1][l-1];
			voisins[1] = courant[k-1][l];
			voisins[2] = courant[k-1][l+1];
			voisins[3] = courant[k][l-1];
			voisins[4] = courant[k][l+1];
			voisins[5] = courant[k+1][l-1];
			voisins[6] =  courant[k+1][l];
			voisins[7] = courant[k+1][l+1];	
			suivant[i][j] = Cell::calcul(voisins, courant[k][l]);
			l++;
		}
		k ++;
	}
	
	for(int i = 0; i<NB_CELL+2; i++){
		for(int j = 0; j< NB_CELL+2; j++){
			tab[i][j]->change(suivant[i][j]);
		}
	}
	update();	

}
