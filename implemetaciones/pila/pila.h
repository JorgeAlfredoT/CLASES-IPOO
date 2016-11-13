#ifndef PILA_H
#define PILA_H

template<typename type>
class Pila{
private:
   int size;
   type *data;
   void resize(int);
   type errorVacia(){return -1;}
public:
   Pila();
   ~Pila();
   Pila(Pila &);
   void push(type);
   type pop();
   void getSize();
   void printPila();
};



#endif
