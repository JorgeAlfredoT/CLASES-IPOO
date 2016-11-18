circular : main.o listaCircular.o node.o operations.o
	g++ main.o listaCircular.o node.o operations.o -o circular

main.o : main.cpp
	g++ -c main.cpp

listaCircular.o : listaCircular.cpp listaCircular.h
	g++ -c listaCircular.cpp
node.o : node.cpp node.h
	g++ -c node.cpp

operations.0 : operations.cpp operations.h
	g++ -c opeartion.cpp

clean :
	rm *.o circular
