/*Write a program to create template class to find simple interest of integer and float value
using function template*/

#include<iostream> 
using namespace std;
template<class t>
class SP
{
public:
     t p,r,n;
      SP(t p,t r,t n)
     {
          this->p=p;
          this->r=r;
          this->n=n;
     }
     t interest()
     {
          return (p*r*n)/100;
     }
};
int main()
{
     cout<<"For integer value"<<endl;
     int p1,r1,n1;
     cout << "enter values of p,r and n : ";
     cin >> p1 >> r1 >> n1;
     SP <int> ob1(p1,r1,n1);
     cout << "SIMPLE INTEREST : " << ob1.interest() << endl;

      float p2,r2,n2;
     cout<<"For float value"<<endl;
      cout << "enter values of p,r and n : ";
     cin >> p2 >> r2 >> n2;
      SP <float> ob2(p2,r2,n2);
     cout << "SIMPLE INTEREST : " <<  ob2.interest()  << endl;
    
   return 0;  
}
