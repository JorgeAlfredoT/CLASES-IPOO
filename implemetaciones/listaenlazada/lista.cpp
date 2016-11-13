#include<iostream>
#include"lista.h"

using namespace std;

//crea una lista enlazada
template<typename type>
void Lista<type>::crear(type nro){
   for(int e = 0 ;e<nro ; e++){
      add_end(e);
   }
}

//constructor
template<typename type>
Lista<type>::Lista(){
   numNodes = 0;
   head = NULL;
}

//destructtor
template<typename type>
Lista<type>::~Lista(){
   ;
}

//agrega a la cabeza
template<typename type>
void Lista<type>::add_head(type val_o){
   Node<type> *newNode = new Node<type>(val_o);
   Node<type> *temp = head;
   if(!head) // no hay cabeza
      head = newNode;
   else{
      newNode->sgte = head;
      head = newNode;
   }
   // while(temp)// apuntando a head
   //    temp->sgte = temp;
   numNodes++;
}

//agreaga al final
template<typename type>
void Lista<type>::add_end(type val_f){
   Node<type> *newNode = new Node<type>(val_f);
   Node<type> *temp = head;

   if(!head)
      head = newNode;
   else{
      while(temp->sgte != NULL)
         temp = temp->sgte;
      temp->sgte = newNode;
   }
   numNodes++;
}
//concatena lista
template<typename type>
void Lista<type>::concatenar(Lista<type> list){
   Node<type> * temp = list.head;
   while(temp){
      add_end(temp->val);
      temp = temp->sgte;
   }
}
//imprime lista
template<typename type>
void Lista<type>::printLista(){
   Node<type> *temp = head;
   while(temp != NULL ){
      cout<<"["<<temp->val<<"|*--]--> ";
      temp = temp->sgte;
   }
   cout<<"NULL"<<endl;
}
//tamaño de la lista
template<typename type>
void Lista<type>::size(){
   cout<<numNodes<<endl;
}

template<typename type>
void Lista<type>::delete_user_valor(type valor ){
   int a=0;
   Node<type> *prev = head;
   Node<type> * cur = head->sgte;
   if(head->val == valor){
      head = head->sgte;
      delete prev;
   }
   else{
      while(cur){
         if(cur->val == valor){
            prev->sgte = cur->sgte;
            a=1;
            delete cur;
         }
         prev = cur;
         cur = cur->sgte;
      }
   }
   if(a)
      numNodes--;
}


template<typename type>
void Lista<type>::add_user(int position, type val ){
   Node<type> *newNode = new Node<type>(val);
   Node<type> *prev = head;
   Node<type> * cur = head->sgte;
   if(position == 0){
      newNode->sgte = prev;
      head = newNode;
   }
   else{
      int cont = 1;
      while(cont != position){
         cont++;
         prev = cur;
         cur = cur->sgte;
      }
      prev->sgte = newNode;
      newNode->sgte = cur;
   }
   numNodes++;
   //cur->sgte = NULL;

}

template<typename type>
void Lista<type>::delete_position(int position){
   int a = 0;
   Node<type> *prev = head;
   Node<type> *cur = head->sgte;
   if(position == 0){
      head = head->sgte;
      delete prev;
   }
   else{
      int cont = 1;
      while(cont != position ){
         cont++;
         prev = cur;
         cur = cur->sgte;
      }
      prev->sgte = cur->sgte;
      a = 1;
      delete cur;
   }
   if(a)
      numNodes --;
}
