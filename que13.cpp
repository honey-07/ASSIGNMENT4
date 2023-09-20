// Write an overloaded template function area that calculates area of different shapes.

#include<iostream>
using namespace std;

template <class t>
t area(t &r)
{
     return 3.14*r*r;
}
int area(int &l,int &b)
{
     return l*b;
}
float area(float &h,float &base)
{
     return 0.5*h*base;
}

int main()
{
     float r;
     cout<<"enter radius of a circle : ";
     cin >> r;
     cout << "AREA OF CIRCLE IS : " << area(r)<< endl;

     int l,b;
     cout<<"enter length and breadth of rectangle : ";
     cin >> l >> b;
     cout << "AREA OF RECTANGLE IS : " << area(l,b)<< endl;

     float h,base;
     cout<<"enter height and base of triangle : ";
     cin >> h >> base;
     cout << "AREA OF TRIANGLE IS : " << area(h,base)<< endl;
     
return 0;     
}
