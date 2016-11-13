t : main.o lista.o node.o
	g++ main.o lista.o node.o -o t
main.o: main.cpp
	g++ -c main.cpp
lista.o: lista.cpp lista.h
	g++ -c lista.cpp
node.o: node.cpp node.h
	g++ -c node.cpp
clean:
	rm *.o t
