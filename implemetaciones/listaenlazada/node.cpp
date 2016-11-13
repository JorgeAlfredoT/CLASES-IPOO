#include<iostream>
#include"node.h"
using namespace std;

template<typename type>
Node<type>::Node(){
   val=0;
   sgte= NULL;
}

template<typename type>
Node<type>::Node(type newval){
   val = newval;
   sgte=NULL;
}

template<typename type>
void Node<type>::delete_all(){
   if(sgte)
      sgte->delete_all();
   delete this;
}
// template<typename type>
// void Node<type>::print(){
//    cout<<val<<endl;
// cout<<endl;
// }
