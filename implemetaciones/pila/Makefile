gato : main.o pila.o
	g++ main.o pila.o -o gato

main.o : main.cpp
	g++ -c main.cpp

pila.o : pila.cpp pila.h
	g++ -c pila.cpp

clean :
	rm *.o gato
