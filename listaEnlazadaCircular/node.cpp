#include<iostream> // para NULL
#include"node.h"

template<typename type>
Node<type>::Node(){
   this->val=0;
   sgte = NULL;
}

template<typename type>
Node<type>::Node(type newval){
   this->val = newval;
   sgte = NULL;
}

template<typename type>
type Node<type>::getVal()const{
   return val;
}
