#include<iostream>
#include"vector.h"
using namespace std;

template<typename type>
Vector<type>::Vector(){
   size = 0;
   arr = new type[size];
}

template<typename type>
Vector<type>::~Vector(){
   delete [] arr ;
}

template<typename type>
Vector<type>::Vector(Vector &o){
   size = o.size;
   arr = new type[o.size];
}

template<typename type>
void Vector<type>::resize(int newsize){
   size = newsize;
   type *newarr = new type[newsize];
   for(int e = 0 ; e < size; e++){ // size actualizado
      newarr[e] = arr [e];
   }
   delete [] arr;
   arr = newarr;
}

template<typename type>
void Vector<type>::getSize(){
   cout<<size<<endl;
}

template<typename type>
void Vector<type>::push_back(const type &e){
   resize(size+1);
   arr[size - 1] = e;
}

template<typename type>
void Vector<type>::push_user(const type position, const type &p){
   resize(size + 1);
   for(int e = size - 1 ; e>position ; e--)
      arr[e] = arr[e-1];
   arr[position] = p;
}

template<typename type>
void Vector<type>::push_front(type e){
   push_user(0,e);
}

template<typename type>
void Vector<type>::printVector(){
   for(int e = 0 ; e < size; e++){
      cout<<arr[e]<<"  ";
   }
   cout<<endl;
}

template<typename type>
type Vector<type>::get_back(){
   return arr[size - 1];
}

template<typename type>
type Vector<type>::get_front(){
   return arr[0];
}

template<typename type>
type Vector<type>::get_user(int position){
   return arr[position];
}

template<typename type>
void Vector<type>::delete_user(int position){
   for(int e = 0 ; e<size; e++){
      if(e != position)
         continue;
      else if(e == position)
         arr[e] = arr[e+1];
   }
   for(int e = position +1  ;e <size ; e++)
      arr[e] = arr[e+1];
   resize(size - 1);
}
