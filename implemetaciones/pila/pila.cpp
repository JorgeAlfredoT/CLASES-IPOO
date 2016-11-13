#include<iostream>
#include"pila.h"
#define ERROR "La pila ya esta vacia"
using namespace std;

template<typename type>
Pila<type>::Pila(){
   size = 0 ;
   data = new type[size];
}

template<typename type>
Pila<type>::~Pila(){
   delete [] data;
}

template<typename type>
Pila<type>::Pila(Pila &o){
   size = o.size;
   data = new type [size];
}

template<typename type>
void Pila<type>::resize(int newsize){
   size = newsize;
   type *newdata = new type[newsize];
   for(int e = 0 ;e<size ; e++){
      newdata[e] = data[e];
   }
   delete [] data;
   data = newdata;
}

template<typename type>
void Pila<type>::push(type elem){
   resize(size + 1);
   data[size - 1] = elem;
}

template<typename type>
type Pila<type>::pop(){
   type temp = data[size-1];
   resize(size-1);
   if( size>0)
      return temp;
   else
      return errorVacia();
}

template<typename type>
void Pila<type>::getSize(){
   cout<<size<<endl;
}

template<typename type>
void Pila<type>::printPila(){
   for(int e = 0 ; e<size; e++){
      cout<<data[e]<<" ";
   }
   cout<<endl;
}
