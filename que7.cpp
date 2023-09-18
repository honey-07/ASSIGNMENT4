/* Write a C++ Program to display largest among two numbers using function templates. Pass
Integer, Float and Character as parameter to the template.*/

#include<iostream>
using namespace std;
template<class t>
void largest(t n1,t n2)
{
     if(n1>n2)
          cout<<"largest among two values is : "<< n1 << endl;
     else
         cout<<"largest among two values is : " <<n2 << endl; 
}
int main()
{
     int n1,n2;
     cout<<"enter integer value of n1 and n2  ";
     cin >> n1 >> n2;
     largest(n1,n2);

     float a1,a2;
     cout<<"enter float value of a1 and a2   ";
     cin >> a1 >> a2;
     largest(a1,a2);

     char b1,b2;
     cout<<"enter character value of b1 and b2  ";
     cin >> b1 >> b2;
     largest(b1,b2);


 return 0;    
}
