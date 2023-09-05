// Write a C++ Program to create a function template for finding a maximum value contained in array.

#include<iostream>
using namespace std;
template<class T>

T array(T a[])
{
	T max=a[0];
	for (int i = 1; i < 5; i++)
	{
		if(max < a[i])
			max=a[i];
	}

	cout << "MAXIMUM VALUE FROM ARRAY IS : "<< max << endl;
}

int main (){
	char a[50];

	cout<< "Enter elements of an array : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	array(a);
	return 0;	
}
