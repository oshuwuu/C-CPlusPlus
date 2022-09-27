#include <iostream>
using namespace std;

int main(){

  int n;

  cout << "Enter an Integer: ";
  cin >> n;

  if (n % 2 == 0){
    cout << "The number you've entered is an even number." << endl;
  }
  else{
    cout << "The number you've entered is an odd number." << endl;

  }
  return 0;
}
