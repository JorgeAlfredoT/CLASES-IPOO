#include<iostream>
#include"cola.h"
using namespace std;

template<typename type>
Cola<type>::Cola(){
   size = 0;
   data = new type [size];
}

template<typename type>
Cola<type>::~Cola(){
   delete [] data;
}

template<typename type>
Cola<type>::Cola(Cola &o){
   this->size = o.size;
   this->data = new type [size];
}

template<typename type>
void Cola<type>::resize(type newsize){
   type p = 0;
   size = newsize;
   type *newdata = new type[size]; // size actualizado
   for(int e = 0  ; e<size; e++){ // size actualizado
      // if(e == size-1)
      //    newdata[e] = p;
      // else
         newdata[e]= data[e];
   }
   delete [] data;
   data = newdata;
}

template<typename type>
void Cola<type>::goLeft(){
   for(int e = 0 ; e <size; e++)
      data[e] = data[e+1];
}

template<typename type>
void Cola<type>::push(type elem){
   resize(size + 1);
   data[size - 1] = elem;
}

template<typename type>
type Cola<type>::pop(){
   type temp = data[0];
   goLeft();
   resize(size-1);
   return temp;
}

template<typename type>
void Cola<type>::getSize(){
   cout<<size<<endl;
}

template<typename type>
void Cola<type>::printCola(){
   for (int e = 0 ; e<size ;  e++){
      cout<<data[e]<<"  ";
   }
   cout<<endl;
}
