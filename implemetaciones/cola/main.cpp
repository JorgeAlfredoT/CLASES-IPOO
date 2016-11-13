#include<iostream>
#include"cola.h"
#include"cola.cpp"
using namespace std;


int main(){

   Cola<float> c1;
   for (float e = 0 ;e<5.0 ; e++)
      c1.push(e);
   c1.printCola();
   //c1.getSize();

   c1.push(120);
   c1.printCola();
   //c1.getSize();
   cout<<endl<<endl;
   for(int e = 0 ;e<6 ;e++){
      cout<<c1.pop()<<endl;
      c1.printCola();
      c1.getSize();
      cout<<endl<<endl;
   }

   return 0;
}
