#include <iostream>
using namespace std;

int addition(int a, int b){

  return a + b;

}

int main(){

  int a, b, total;

  cout << "Please enter the first number: ";
  cin >> a;

  cout << endl;
  cout << "Please enter the second number: ";
  cin >> b;


  cout << endl;
  total = addition(a, b);
  cout << "The total of the two numbers are: " << total;

}
