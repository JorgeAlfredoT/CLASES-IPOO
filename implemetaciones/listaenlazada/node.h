#ifndef NODE_H
#define NODE_H
#include<iostream>

template<typename type>
class Node{
public:
   Node *sgte;
   type val;
   Node();
   Node(type);
   ~Node(){}

   void delete_all();
//    void print();
};

#endif
