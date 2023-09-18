// Write program for swapping two values of different data type with use of function template.

#include <iostream>
using namespace std;

template <class T>
void swaping(T &n1,T &n2)
{
     T temp=n1;
    n1=n2;
    n2=temp;    
}
int main()
{
     int n1,n2;
     cout <<"Enter 2 integer values : ";
     cin >>n1>>n2;
     cout<<"before swaping : n1 and n2 is "<< n1 << " and " << n2<< endl;
     swaping(n1,n2);
     cout<<"after swaping : n1 and n2 is "<< n1 << " and " << n2<< endl;

     float a1,a2;
     cout <<"Enter 2 float values : ";
     cin >>a1>>a2;
     cout<<"before swaping : a and b is "<< a1 << " and " << a2<< endl;
     swaping(a1,a2);
     cout<<"after swaping : a and b is "<< a1 << " and " << a2<< endl;
return 0;  
}

