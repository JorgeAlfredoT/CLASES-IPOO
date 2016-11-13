cola : main.o cola.o
	g++ main.o cola.o -o cola

mian.o: main.cpp
	g++ -c main.cpp

cola.o: cola.cpp cola.h
	g++ -c cola.cpp

clean:
	rm *.o cola
