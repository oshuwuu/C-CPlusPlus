#include <iostream>
using namespace std;

int main(){
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;

  cout << "Enter number of rows (between 1 and 100): ";
  cin >> r;

  cout << "Enter number of columns (between 1 and 100): ";
  cin >> c;

  cout << endl << "Enter elements of 1st matrix: " << endl;

  //Storing elements of first matrix entered by user

  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cout << "Enter element a [" << i + 1 << "][" << j + 1 << "] : ";
      cin >> a[i][j];

    }
  }

  cout << endl << "Enter elements of 2nd matrix: " << endl;

  //Storing elements of second matrix entered by user

  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cout << "Enter element b [" << i + 1 << "]["<< j + 1 << "] : ";
      cin >> b[i][j];
    }
  }

  //Adding Two Matrices
  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  //Displaying the result of the sum of the two Matrices
  cout << endl << "Sum of the two matrix is: " << endl;

  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cout << sum[i][j] << " ";

      if(j == c - 1){
        cout << endl;
      }
    }

    return 0;
  }

}
