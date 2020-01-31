// input values of a 2d array and print them out in the formation of the array

#include <iostream>
using namespace std;


int main () {
  int a[4][5]; // initializing the 2d array

  int i;
  int j;

  cout << "Enter values for the array: ";
  // inputting values for the array:
  for (i = 0; i < 4; ++i) { // for the rows
    for (j = 0; j < 5; ++j) { // for the columns
      cin >> a[i][j]; // user inputs the values
    }
  }

  // printing the final array:
  for (i = 0; i < 4; ++i) { // for the rows
    for (j = 0; j < 5; ++j) { // for the columns
      cout << a[i][j] << " ";
    }
    cout << endl; // enters to the next row
  }


  return 0;
}
