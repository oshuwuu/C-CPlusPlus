#include <iostream>
using namespace std;

int main(){

  unsigned int n, sum = 0;

  cout << "Enter a positive number: ";
  cin >> n;

  for(int i = 1; i <=n; i++){
    sum += i;

  }

  cout << "Sum = " << sum;

  return 0;
}
