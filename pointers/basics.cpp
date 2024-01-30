#include <iostream>
using namespace std;

int main () {
  int a =5;
  cout << a << endl;
  cout << " address of a : " << &a << endl;

  int* ptr = &a;

  cout << ptr << endl; 
  cout << "Accessing  " << *ptr << endl;
  cout << &ptr << endl;

  return 0;
}