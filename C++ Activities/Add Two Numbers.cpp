#include <iostream>
using namespace std;

int main(){
  int firstNumber, secondNumber, sum;

  cout << "Please enter one digit/number" << endl;
  cin >> firstNumber;

  cout << "Please enter another digit/number" << endl;
  cin >> secondNumber;


  sum = firstNumber + secondNumber;

  cout << "Below is the total of the two numbers you've given" << endl;
  cout << firstNumber << " + " << secondNumber << " = " << sum;
  return 0;

}
