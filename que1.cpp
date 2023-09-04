// Write a C++ program to enter a string and find its length.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;

	cout<<"Enter your name : ";
	getline(cin,name);

	cout << "The length of your name "<<name <<" is "<< name.length() << endl;

return 0;
}
