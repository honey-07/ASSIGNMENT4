//Write a program to show values of different data types using templates and constructor

#include <iostream>
using namespace std;

template <class t>
class show {
  t value;
 public:
  show(t value)
   {
          this->value = value; 
   }
  void display()
   { 
     cout << "Value: " << value << endl; 
   }
};

int main() {
  show<int> s1(11);
  s1.display();

  show<float> s2(7.11);
  s2.display();

  show<char> s3('s');
  s3.display();

  show<string> s4("honey");
  s4.display();

  return 0;
}

