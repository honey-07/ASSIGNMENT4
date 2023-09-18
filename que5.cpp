// Write a program to pass an object to template function and display its members.

#include<iostream>
using namespace std;

class employee {
 public:
  int id;
  string name;

  employee(int id,string name)
   {
    this->id=id;
    this->name=name;
   }
};

template <class T>
void display(T ob) {
  cout << "employee id is : "<<ob.id << endl;
  cout << "employee name is : " << ob.name << endl;
}

int main() 
{
     int id;
     string name;
      cout << "Enter employee id : ";
      cin >> id;
      cout << "Enter employee name : ";
      cin >> name;
          employee ob(id,name);

  display(ob);
  return 0;
}
