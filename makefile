auto-cell: main.o cell.o matrice.o
	g++ -g $^ -o $@ -lsfml-graphics -lsfml-window -lsfml-system

matrice.o: matrice.cpp cell.hpp matrice.hpp
	g++ -g -c matrice.cpp

main.o: main.cpp cell.hpp
	g++ -g -c main.cpp

cell.o: cell.cpp cell.hpp
	g++ -g -c cell.cpp
	
clean: 
	rm -f *~ *.o
