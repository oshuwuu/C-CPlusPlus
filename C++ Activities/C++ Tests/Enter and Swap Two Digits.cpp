#include <iostream>
using namespace std;

int main(){
  double a, b, temp;

  cout << "Please enter a number: ";
  cin >> a;
  cout << endl;

  cout << "Please enter another number: ";
  cin >> b;
  cout << endl;

  cout << "Before Swapping you entered a as " << a << " and b as " << b << endl << endl;


  temp = a;
  a = b;
  b = temp;

  cout << "After Swapping a is now " << a << " and b is now " << b << endl << endl;


  return 0;
}
