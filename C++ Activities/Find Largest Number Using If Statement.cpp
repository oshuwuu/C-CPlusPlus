#include <iostream>
using namespace std;

int main(){
  float n1, n2, n3;

  cout << "Please enter three numbers: ";
  cin >> n1 >> n2 >> n3;

  cout << "You've entered N1 as " << n1 << ", N2 as " << n2 << ", and N3 as " << n3 << endl;

  if(n1 >= n2 && n1 >= n3){
    cout << "N1 has the largest number";
  }

  if(n2 >= n1 && n2 >= n3){
    cout << "N2 has the largest number";
  }

  if(n3 >= n1 && n3 >= n2){
    cout << "N3 has the largest number";
  }

  return 0;
}
