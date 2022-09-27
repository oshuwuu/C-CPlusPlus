#include <iostream>
using namespace std;

int main(){
  double a, b, c, temp;

  cout << "Please enter the first number: ";
  cin >> a;
  cout << "\n";

  cout << "Please enter the second number: ";
  cin >> b;
  cout << "\n";

  cout << "Please enter the third nunber: ";
  cin >> c;
  cout << "\n";

  cout << "Before Swapping you've entered a as " << a << ", b as " << b << "and c as " << c << "\n";

  temp = a;
  a = b;
  b = c;
  c = temp;

  cout << "After Swapping a is now " << a << ", b is now " << b << ", c is now " << c << "\n";



  return 0;
}
