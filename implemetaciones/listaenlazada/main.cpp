#include<iostream>
#include"lista.h"
#include"lista.cpp"
using namespace std;


int main(){

   Lista<int> l1;
   l1.crear(1);
   l1.printLista();

   for(int e = 100 ;  e>=99 ; e--)
      l1.add_head(e);
   l1.printLista();

   l1.add_end(1800);
   l1.printLista();

   Lista<int> l2;
   l2.crear(2);


   l1.concatenar(l2);
   l1.printLista();
   l1.size();

   // l1.delete_user_valor(100);
   // l1.printLista();
   //
   // l1.delete_user_valor(0);
   // l1.printLista();

   l1.add_user(4,12000);
   l1.printLista();
   l1.size();

   l1.add_user(5,24000);
   l1.printLista();
   l1.size();


   l1.delete_position(7);
   l1.printLista();
   l1.size();

   Lista<int> l3;
   l3.crear(2);
   l1.concatenar(l3);
   l1.printLista();
   l1.size();



   return 0;
}
