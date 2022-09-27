#include <iostream>
using namespace std;

int main(){
  int a = 5, b = 10, temp;

  cout << "Before Swapping " << endl;
  cout << "a = " << a << " and b = " << b << endl;

  temp = a;
  a = 10;
  b = temp;

  cout << "After Swapping " << endl;
  cout << "a = " << a << " and b = " << b;



  return 0;
}
