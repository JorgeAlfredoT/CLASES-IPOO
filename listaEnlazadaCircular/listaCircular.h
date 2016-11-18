#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include"node.h"
#include"node.cpp"

template<typename type>
class ListaCircular{
private:
   Node<type> *head;
   Node<type> *last;
   int nroNodes;
public:
   ListaCircular();
   ~ListaCircular(){}
   void crear(int);
   void add_head(type);
   void add_end(type);
   void add_user(int,type);
   void concatenar(ListaCircular<type> &); //
   void delete_user_valor(type);
   void delete_position(int);
   void printListaCircular();
   type size(){return nroNodes;}
};





#endif
