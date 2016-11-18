#include<iostream>
#include "listaCircular.h"
#include "listaCircular.cpp"
using namespace std;

int main(){

   ListaCircular<int> lc1;
   //lc1.printListaCircular();

   lc1.crear(2);

   lc1.add_head(2000);
   lc1.add_head(1000);
   lc1.add_end(2);
   //lc1.printListaCircular();
   //cout<<lc1.size()<<endl;
   lc1.add_user(4,111);
   // lc1.printListaCircular();
   lc1.printListaCircular();
   lc1.delete_position(12);
   lc1.printListaCircular();

   return 0;
}
