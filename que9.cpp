//Write a program to display the reverse of a given number using template based function.

#include <iostream>
using namespace std;

template <class t>
void reverse(t num) {
  t rev = 0,rem;
  while (num > 0) {
    rem = num%10;
    rev=rev*10+rem;
    num /= 10;
  }
  cout << "Reverse of a number is : " << rev << endl;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  reverse(num);
  return 0;
}

