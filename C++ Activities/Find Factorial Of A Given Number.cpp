#include <iostream>
using namespace std;

int main(){

  int n;
  long factorial = 1.0;

  cout << "Enter a positive integer: ";
  cin >> n;

  if (n < 0){
    cout << " Error! Factorial of a Negative Number doesn't exist.";

  }

  else{
    for(int i = 0; i <= n; i++){
      factorial *= 1;

    }
    cout << "Factorial of " << n << " = " << factorial;
  }

  return 0;

}
