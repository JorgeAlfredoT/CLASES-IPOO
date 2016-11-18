#include<iostream>
#include "listaCircular.h"
#include "operations.h"
using namespace std;

template<typename type>
ListaCircular<type>::ListaCircular(){
   head = last = NULL;
   nroNodes = 0;
}

template<typename type>
void ListaCircular<type>::add_head(type newval){
   Node<type> *newNode = new Node<type>(newval);
   if(!head){
      head = last = newNode;
      last->sgte = head;
   }
   else{
      last->sgte = newNode;
      newNode->sgte = head;
      head = newNode;
   }
   nroNodes++;
}

template<typename type>
void ListaCircular<type>::add_end(type newval){
   Node<type> *newNode = new Node<type>(newval);
   if(!head){
      head = last = newNode;
      last->sgte = head;
   }
   else{
      last->sgte = newNode;
      last = newNode;
      newNode->sgte = head;
   }
   nroNodes++;
}

template<typename type>
void ListaCircular<type>::crear(int cant){
   for(int e = 0 ; e < cant ; e++)
      add_end(e);
}

template<typename type>
void ListaCircular<type>::printListaCircular(){
   Node<type> *temp = head;
   for( int e = 0; e < nroNodes ;e++, temp = temp->sgte ){
      cout << "|"<<temp->val << "|*--|->";
   }
   cout<<"HEAD"<<endl;
}

template<typename type>
void ListaCircular<type>::add_user(int position, type newval){
   Node<type> *newNode = new Node<type>(newval);
   Node<type> *prev = head;
   Node<type> *cur = head->sgte;

   if(position == 0 || multiplo(position, nroNodes)){
      last->sgte = newNode;
      newNode->sgte = head;
      head = newNode;
   }
   else{
      int cont = 1 ;
      while(cont != position ){
         cont ++;
         prev = cur;
         cur = cur->sgte;
      }
      prev->sgte = newNode;
      newNode->sgte = cur;
   }
   nroNodes++;
}

template<typename type>
void ListaCircular<type>::delete_position(int position){
   int eliminado = 0;
   Node<type> *prev = head;
   Node<type> *cur = head->sgte;
   if(position == 0 || multiplo(position,nroNodes)){
      head = head->sgte;
      last->sgte = head;
      eliminado = 1;
      delete prev;
   }
   else{
      int cont = 1;
      while(cont != position){
         cont++;
         prev = cur;
         cur = cur->sgte;
      }
      prev->sgte = cur->sgte;
      eliminado = 1;
      delete cur;
   }
   if(eliminado)
      nroNodes--;
}
