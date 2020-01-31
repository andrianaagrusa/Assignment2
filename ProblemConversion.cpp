#include <iostream>
#include <string>
using namespace std;

//initializing variables:
double lengthFeet;
double lengthInches;

void userInput(double& lengthFeet, double& lengthInches) { //gets the length from the user in feet and inches
  cout << endl;
  cout << "Enter the length: " << endl;
  cout << "Feet: ";
  cin >> lengthFeet;
  cout << "Inches: ";
  cin >> lengthInches;
}

double convert_to_cm(double lengthFeet, double lengthInches) { //converts everything to inches and then centimeters
  double lengthCm;
  double totalInches;
  totalInches = lengthInches + (lengthFeet * 12);
  lengthCm = totalInches * 2.54; // converts total inches into total centimeters
  return lengthCm;
}

double convert_cm_to_m(double lengthFeet, double lengthInches) { //converts all the centimeters into the whole number meter
  double finalMeters;
  int wholeMeters;
  finalMeters = convert_to_cm(lengthFeet, lengthInches) / 100; // takes the total centimeters and divides by 100 to get meters (in a decimal form)
  wholeMeters = static_cast<int>(finalMeters); // takes just the whole number of meters
  return wholeMeters; // saves the whole number
}

double left_over_cm(double lengthFeet, double lengthInches) { //gets the left over centimeters by taking the whole number meter and subtracting the decimal number of meters
  double finalCm;
  double finalMeters;
  int wholeMeters;
  finalMeters = convert_to_cm(lengthFeet, lengthInches) / 100; // getting the decimal
  wholeMeters = static_cast<int>(finalMeters); // getting the whole number from meters
  finalCm = (finalMeters - wholeMeters) * 100; // because 1 cm = 100 m
  return finalCm;
}

void output() { // printing the conversion
  userInput(lengthFeet, lengthInches);
  cout << endl;
  cout << "Conversion: " << endl;
  cout << lengthFeet << " feet "<< lengthInches << " inches " << "equals: ";
  cout << convert_cm_to_m(lengthFeet, lengthInches) << " meters and "<< left_over_cm(lengthFeet, lengthInches) << " centimeters" << endl;
}

  int main(){
    string keepGoing;
      while (keepGoing != "exit") { // while the user still wants to convert

      output(); // executes the output function

      cout << endl;
      // asking the user if they want to keep converting
      cout << "Enter 'go' to convert again or 'exit' to stop: ";
      cin >> keepGoing;
    }
    return 0;
  }
