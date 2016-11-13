#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include"sobrepunto.h"

//desarrolllo de la clase punto.
template<typename type>
type Punto<type>::getX()const{
   return x;
}
template<typename type>
type Punto<type>::getY()const{
   return y;
}
template<typename type>
void Punto<type>::setX(const type newx){
   x=newx;
}
template<typename type>
void Punto<type>::setY(const type newy){
   y=newy;
}
template<typename type>
Punto<type> Punto<type>::operator+(const Punto<type> p){
   Punto cual;
   cual.x = x + p.x;
   cual.y = y + p.y;
   return cual;
}
template<typename type>
Punto<type> Punto<type>::operator-(const Punto<type> p){
   Punto cual;
   cual.x = x - p.x;
   cual.y = y - p.y;
   return cual;
}
template<typename type>
Punto<type> Punto<type>::operator*(const Punto<type> &p){
   this->x *= p.x;
   this->y *= p.y;
   return *this;
}
template<typename type>
Punto<type> Punto<type>::operator / (const Punto<type> &p){
   if(p.x != 0)
      this->x /= p.x;
   else this->x = 0;

   if(p.y != 0)
      this->y /= p.y;
   else this->y = 0;

   return *this;
}
template<typename type>
Punto<type> Punto<type>::operator = (const Punto<type> &p){
   if(this != &p){ // compruebo que no se iguale a si mismo
      this->x = p.x;
      this->y = p.y;
   }
   return *this;
}

template<typename type>
Punto<type> Punto<type>::operator ++(){
   this->x ++;
   this->y ++;
   return *this;
}
template<typename type>
bool Punto<type>::operator == (const Punto<type> &p)const{
   if(this->x == p.x && this->y == p.y)
      return true;
   return false;
}


int main(){
   Punto<float> p0(12,5),p01(5,0 ), p001;
   Punto<int> p1(5,3), p2(4,7), ps3,pr4,pm5, pd6, p8(12,13),p9(12,13);
   cout<<"Punto1  "<<p1<<endl;
   cout<<"Punto2  "<<p2<<endl;

   ps3 = p1 + p2;
   cout<<"p1 + p2  "<<ps3<<endl;

   pr4 = p1 - p2;
   cout<<"p1 - p2  "<<pr4<<endl;

   pm5= p1 * p2;
   cout<<"p1 * p2  "<<pm5<<endl;

   p001 = p0 / p01;
   cout<<"p0 / p01  "<<p001<<endl;

   // p1 = p2;
   // cout<<"Nuevo p1: "<<p1<<endl;
   //
   // p2 = ps3;
   // cout<<"nuevo p2: "<<p2<<endl;
   //
   // ++p2;
   // cout<<"p2: "<<p2<<endl;

   cout<<"p8 == p9 "<< ( (p8 == p9) ? "si" : "No") <<endl;


   return 0;
}
