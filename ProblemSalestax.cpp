#include <iostream>
#include <iomanip>
using namespace std;


float addTax(float taxRate, float cost) { // function that takes the cost and the tax rate as parameters
  float totalCost;
  totalCost = cost + (cost * taxRate); // calculating the total cost including the tax

  return totalCost;
}

int main() {
  // initializing variables:
  float userTaxRate;
  float userCost;

  // getting the cost and tax rate input from user:
  cout << "Enter the inital cost: $";
  cin >> userCost;
  cout << "Enter the tax rate as a decimal: ";
  cin >> userTaxRate;

  cout << "Total cost: $" << fixed << setprecision(2) << addTax(userTaxRate, userCost) << endl; // set precision to 2 decimal places (for money)

  return 0;
}
