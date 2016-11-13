#ifndef VECTOR_H
#define VECTOR_H


template<typename type>
class Vector{
private:
   int size;
   type *arr;
   void resize(int);
public:
   Vector();
   ~Vector();
   Vector(Vector &);
   void push_back(const type &);
   void push_user(const type, const type &);
   void push_front(type);
   type get_back();
   type get_user(int);
   type get_front();
   void printVector();
   void getSize();
   void delete_user(int);
};



#endif
