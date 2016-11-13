#include<iostream>
#include"vector.h"
#include"vector.cpp"
using namespace std;





int main(){

   Vector<int> v1;
   for(int e = 0 ; e<5; e++)
      v1.push_back(e);
   v1.printVector();
   v1.getSize();

   for(int e = 100 ;e<104 ; e++)
      v1.push_front(e);
   v1.printVector();
   v1.getSize();

   v1.push_user(3,10000);
   v1.printVector();
   v1.getSize();

   cout<<v1.get_back()<<endl;
   cout<<v1.get_front()<<endl;
   cout<<v1.get_user(5)<<endl;

   v1.push_back(23000);
   v1.printVector();

   v1.delete_user(4);
   v1.printVector();

   v1.delete_user(7);
   v1.printVector();

   return 0;
}
