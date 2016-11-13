#include<iostream>
using namespace std;

template<typename type>
type *linealSearch(type *first, type *last, type value){
   for( ; first != last ; first++){
      if((*first) == value)
         return first;
   }
   return -1;
}




int main(){


   return 0;
}
