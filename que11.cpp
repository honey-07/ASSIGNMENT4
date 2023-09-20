// Write a program to create template class to find binary value of a number given by user.

#include<iostream>
using namespace std;
template<class t>
class binary
{
public:
     t num;
     t Binary(t num)
     {
          t b[100],i=0;
          while(num>0)
          {
          
          b[i]=num%2;
          num=num/2;
          i++;
          }
           cout<< "binary : ";

          for (int j = i-1; j >= 0 ; j--)
          {
               cout<< b[j];
          }
          
     }
};
int main()
{
     binary <int> ob;
     ob.Binary(500);
return 0;
}
