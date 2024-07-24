// 6. WAP to show the concept of reference variable.

#include <iostream>
using namespace std ;


int main() {
  int a=5000;
  int &b = a;
  cout << " value of a :" <<a<< endl;
  cout << " value of b ( Refernce Variable ) :" <<b<< endl;
  b = b + 3000;
  cout << " AAfter Doing Reference Variable + 3000 :"<< endl;
  cout << " value of a :" << a << endl;
  cout << " value of b :" << b << endl;
  return 0;
}