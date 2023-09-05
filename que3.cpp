//Write a program to create a class template for the ‘Array’ class.

#include<iostream>
using namespace std;

template<class T>
class Array
{
public:
	T array(T a[],int s){
		for (int i = 0; i < s; i++)
		{
			cout << a[i] << " ";
		}
	}
}; 

 int main()
 {
 	Array <float>ob;
 	float a[30];
 	int s;
 	cout<<"Enter size of an array : ";
 	cin >>s;

 	cout<<"Enter elements of an array : ";
 	for (int i = 0; i < s; i++)
 	{
 		cin >>a[i];
 	}

 		ob.array(a,s);
 return 0;
 }
