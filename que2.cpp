// Write a C++ Program to to add two numbers with use of template function.
#include<iostream>
using namespace std;

template<class T1,class T2>
 
 void add(T1 n1,T2 n2){

 	cout << "Addition is : "<< n1+n2 << endl;
 } 

 int main()
 {
 	int n1;
 	float n2;

 	cout << "Enter integer number : ";
 	cin >> n1;

 	cout << "Enter float number : ";
 	cin >> n2;

 		add(n1,n2);
 return 0;
 }
