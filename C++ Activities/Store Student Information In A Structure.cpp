#include <iostream>
using namespace std;


struct student{

  char fname[50];
  char lname[50];
  int roll;
  float marks;
};

int main(){

  student s;
  cout << "Enter Student Information " << endl;
  cout << "Enter First Name: ";
  cin >> s.fname;
  cout << "Enter Last Name: ";
  cin >> s.lname;
  cout << "Enter roll number: ";
  cin >> s.roll;
  cout << "Enter Marks: ";
  cin >> s.marks;

  cout << "Displaying Student Information " << endl;
  cout << "Student Full Name: " << s.fname << " " << s.lname << endl;
  cout << "Student Role Number: " << s.roll << endl;
  cout << "Student Marks: " << s.marks << endl;

  return 0;
}
