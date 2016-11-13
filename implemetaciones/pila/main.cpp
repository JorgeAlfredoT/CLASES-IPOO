#include<iostream>
#include"pila.h"
#include"pila.cpp"
using namespace std;


int main(){

   Pila<int> p1;
   p1.printPila();

   for(int e = 0; e < 8 ; e++)
      p1.push(e);
   p1.printPila();

   p1.push(5000.23);
   p1.printPila();

   p1.push(45);
   p1.printPila();


   cout<<endl<<endl;
   for(int e = 0 ; e<10; e++){
      cout<<p1.pop()<<endl;
      p1.printPila();
      p1.getSize();
      cout<<endl;
   }


   return 0;
}
