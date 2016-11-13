#include<iostream>
using namespace std;

class A{
public:
   void funcionX(){
      delete this;
   }
};


int main(){

// ESTO SI ES VALIDO
A *ptr = new A;
ptr->funcionX();
ptr = NULL; //  lo hacemis null para que ya no se haga acceso a ella(ptr)

// A a;
// a.funcionX(); // no se puede hacer comportamiento no definido

   return 0;
}
