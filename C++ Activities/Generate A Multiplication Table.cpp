#include <iostream>
using namespace std;

int main(){

  //declare variables
  int n;

  //ask user for input
  cout << "Enter a positive integer: ";
  cin >> n;


  //print multiplication table
  for(int i = 1; i <= 10; i++){

    cout << n << " * " << i << " = " << n * i << endl;

  }


  return 0;
}
