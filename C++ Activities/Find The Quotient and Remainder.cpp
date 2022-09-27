#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int divisor, dividend, quotient, remainder = 0.0;

  cout << "Enter divident: " << endl;
  cin >> dividend;

  cout << "Enter divisor: " << endl;
  cin >> divisor;

  quotient = dividend / divisor;
  remainder = dividend  % divisor;

  cout << "Quotient = " << quotient << endl;
  cout << "Remainder = " << remainder << endl;

  return 0;
}
