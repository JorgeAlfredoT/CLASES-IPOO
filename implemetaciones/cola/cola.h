#ifndef COLA_H
#define COLA_H


template<typename type>
class Cola{
private:
   int size;
   type *data;
   void resize(type);
   void goLeft();
public:
   Cola();
   Cola(Cola &);
   ~Cola();
   void push(type);
   type pop();
   void getSize();
   void printCola();

};
 #endif
