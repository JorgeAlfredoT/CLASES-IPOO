#ifndef NODE_H
#define NODE_H

template<typename type>
class Node{
public:
   type val;
   Node *sgte;
   Node();
   Node(type);
   ~Node(){}
   type getVal()const;
};


#endif
