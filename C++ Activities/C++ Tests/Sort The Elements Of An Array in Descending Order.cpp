#include <iostream>
using namespace std;

#define MAX 100

int main(){

  //declraring variables
  int arr[MAX];
  int n, i, j;
  int temp;

  //user input
  cout << "Enter Number Of Elements To Read: ";
  cin >> n;


  //check bound or array limits
  if(n < 0 || n > MAX){
    cout << "Invalid Number Of Elements! Please try using lower than or equal to 100.";
    return -1;
  }

  //read n elements
  for(i = 0; i < n; i++){
    cout << "Enter Element [ " << i + 1 << " ] = ";
    cin >> arr[i];
  }

  //print unsorted elements
  cout << "Unsorted Array Elements: " << endl;
  for(i = 0; i < n; i++){
    cout << "Array Value Of Index [ " << i << " ] = " << arr[i] << endl;

  }

  //sort elements in descending order
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      if(arr[i] < arr[j]){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  //print sorted elements
  cout << "Sorted Array Elements In Descending Order: " << endl;
  for(i = 0; i < n; i++){
    cout << "Array Value Of Inder [ " << i << " ] = " << arr[i] << endl;


  }


  return 0;
}
