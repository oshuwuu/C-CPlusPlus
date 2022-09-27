#include <iostream>
using namespace std;

int main(){

  char c;
  bool isLowercaseVowel, isUppercaseVowel;

  cout << "Enter an Alphabet ";
  cin >> c;

  //Evaluates to 1 (true) if c is a lowercase vowel
  isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

  //Evaluate to 1 (true) if c is an uppercase vowel
  isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (!isalpha(c)){
    printf("Error! Non Alphabetical character.");
  }

  else if(isLowercaseVowel || isUppercaseVowel){
    cout << c << " is a vowel.";
  }

  else {
    cout << c << " is a consonant.";
  }
}
