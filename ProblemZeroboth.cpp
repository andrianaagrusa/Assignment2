// function zeroBoth which takes two pass by reference variables and sets them both equal to 0

#include <iostream>
using namespace std;

void zeroBoth(int& varOne, int& varTwo) { // function with pass-by-reference parameters
  varOne = 0;
  varTwo = 0;
}
int main() {
  int one;
  int two;
  zeroBoth(one, two); // executing the function

  return 0;
}
