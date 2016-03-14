# Jeu de la vie
Le jeu de la vie est un automate cellulaire imaginé par John Horton Conway en 1970 qui est probablement, au début du 21e siècle, le plus connu de tous les automates cellulaires.
En préambule, il faut préciser que le jeu de la vie n’est pas vraiment un jeu au sens ludique, puisqu’il ne nécessite aucun joueur ; il s’agit d’un automate cellulaire, un modèle où chaque état conduit mécaniquement à l’état suivant à partir de règles pré-établies.

Le jeu se déroule sur une grille à deux dimensions, théoriquement infinie (mais de longueur et de largeur finies et plus ou moins grandes dans la pratique), dont les cases — qu’on appelle des « cellules », par analogie avec les cellules vivantes — peuvent prendre deux états distincts : « vivantes » ou « mortes ».

À chaque étape, l’évolution d’une cellule est entièrement déterminée par l’état de ses huit voisines de la façon suivante :

* Une cellule morte possédant exactement trois voisines vivantes devient vivante (elle naît).
* Une cellule vivante possédant deux ou trois voisines vivantes le reste, sinon elle meurt.
    
#Auto-cell
Je propose ici un implémentation du jeu de la vie.
* Clique gauche : activer un cellule
* Clique droit : desactiver un cellule
* Entrée : lancer le jeu
* R : restart
Je l'ai réaslisé avec la librarie [sfml](http://www.sfml-dev.org/index-fr.php).
