#include <iostream>
#include <math.h>

int main() {

  // appending strings
  std::string name = "Carlos";
  name = name + " Jr.";
  //std::cout << name + "\n"; // so you can add here or above

  // multiply and assign
  int n = 100;
  n *= 2;
  // std::cout << n << " \n";

  //square roots
  int m = 2;
  // std::cout << sqrt(m) << "\n";

  // count the number of words
  int num_words = 0;
  std::string previous = " ";
  std::string current;
  /*
  while(std::cin >> current) {
    ++ num_words;
    if (previous == current) 
      std::cout << "word number " << num_words << " repeated: " << current << "\n";
      previous = current;
  } */

  // into to char
  int x = 100;
  char y = x;
  std::cout << y << "\n";

  // narrowers
  /*
  double x2 {2.7};
  int y2 {x2}; */
  // implicit conversion will throw an error

  // constant expressions
  constexpr double pi = 3.14159265359;
  double circum = 2 * pi;
  std::cout << circum << "\n";

  // switch statements
  /*
  constexpr double cm_per_sq_inch = 2.54;
  double length = 1;
  char unit = 'a';
  std::cout << "please enter a length followed by a unit (c or i) : \n";
  std::cin >> length >> unit;
  switch (unit) { // you cannot switch on a string
    case 'i':
      std::cout << length << " in == " << cm_per_sq_inch * length << "cm\n";
      break;
    case 'c':
      std::cout << length << "cm == " << length / cm_per_sq_inch << "in\n";
      break;
    default:
      std::cout << "invalid unit \n";
      break;
  } */

  //
} 