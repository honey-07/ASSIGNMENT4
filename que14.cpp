//Write a program that has a template class STUDENT to read and print the details of student. Use multiple arguments.

#include<iostream>
#include<string>
using namespace std;

template<class t1,class t2>

class student
{
     t1 name;
     t2 roll;
public:
     void get()
     {
          cout << "enter name : ";
          getline(cin,name);
          cout << "enter rollno : ";
          cin >> roll;
          
     }
     void display()
     {
          cout << "details of student :" <<endl;
          cout<< "name : "<< name <<endl <<" rollno : "<< roll << endl;
     }
};
int main()
{
     student <string,int> ob;
    ob.get();
    ob.display();
 return 0;   
}
