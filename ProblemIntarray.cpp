#include <iostream>
using namespace std;

int main() {
  int i;
  int numberArray[10]; // initializing the array
  cout << "Enter digits to input into the array: ";
  for (i = 0; i < 10; ++i) { // iterating through each index of the array
    cin >> numberArray[i];
    if (i < 0) { // if the number entered is negative
      cout << "Enter positive numbers only";
    }
  }
  cout << endl;

  // prints the contents of the array
  cout << numberArray[0] << endl;
  cout << numberArray[1] << endl;
  cout << numberArray[2] << endl;
  cout << numberArray[3] << endl;
  cout << numberArray[4] << endl;
  cout << numberArray[5] << endl;
  cout << numberArray[6] << endl;
  cout << numberArray[7] << endl;
  cout << numberArray[8] << endl;
  cout << numberArray[9] << endl;


  return 0;

}
