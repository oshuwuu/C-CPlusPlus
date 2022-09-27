#include <iostream>
using namespace std;

#define MAX 100

int main(){

  //array Decleration
  int arr[MAX];
  int n, i, j;
  int temp;


  //total number of elements to read
  cout << "Enter total number of elements to read: ";
  cin >> n;

  //check bound
  if(n < 0 || n > MAX){
    cout << "Invalid range or number of elements! Please enter lower than or equal to 100." << endl;
    return -1;

  }

  //read n elements
  for(i = 0; i < n; i++){
    cout << "Enter element [ " << i + 1 << " ] = ";
    cin >> arr[i];
  }

  //print input elements
  cout << "Unsorted Array Elements: " << endl;
  for(i = 0; i < n; i++){
    cout << "Array Value Of Index " << i << " [ " << arr[i] << " ] "<< endl;
  }

  //sorting elements in ascending order
  cout << "Sorted Array Elements: " << endl;
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      if(arr[i] > arr[j]){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  //print sorted Elements
  cout << endl;
  cout << cout << "Sorted Array Elements In Ascending Order: " << endl;
  for(i = 0; i < n; i++){
    cout << "Array Value Of Index " << i << " [ " << arr[i] << " ] "<< endl;


  }
}
