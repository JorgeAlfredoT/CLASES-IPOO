#ifndef SOBREPUNTO_H
#define SOBREPUNTO_H

#include<iostream>
using namespace std;

template<typename type>

class Punto{
private:
   type x,y;
public:
   Punto(type a=0, type b=0 ): x(a), y(b){}
   ~Punto(){}
   Punto(Punto &o): x(o.x), y(o.y){}
   type getX()const;
   type getY()const;
   void setX(const type newx);
   void setY(const type newy);

   //sobrecarga de operradores
   Punto operator + (const Punto<type>);
   Punto operator - (const Punto<type>);
   Punto operator * (const Punto<type> &);
   Punto operator / (const Punto<type> &);
   Punto operator = (const Punto<type> &);
   Punto operator ++();
   bool operator == (const Punto<type> &)const;

   friend ostream & operator<<(ostream &o,const Punto<type> p){
      o<<"("<<p.x<<","<<p.y<<")";
      return o;
   }
   friend istream & operator>>(istream &i, const Punto<type> p){
      i>>p.x>>p.y;
      return i;
   }
};

#endif
