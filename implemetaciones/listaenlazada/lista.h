#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include<string>
#include<cstdlib>
#include"node.h"
#include"node.cpp"

using namespace std;
template<typename type>
class Lista{
private:
   Node<type> *head;
   int numNodes;
public:
   Lista();
   ~Lista();
   void crear(type);
   void add_head(type);
   void add_end(type);
   void add_user(int,type);
   void concatenar(Lista<type> list);
   void delete_user_valor(type);
   void delete_position(int);
   void printLista();
   void size();
};

#endif
