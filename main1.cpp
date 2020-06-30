/***********************************************************
** Author: Jayson Landman
** Description: Some cpp exercises from programming 
                principals by Bjarne Stroustrap
***********************************************************/

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

/*********** Some user-defined functions *****************/

void print_square(int v) {
  std::cout << v << '\t' << v * v << '\n';
}

int square(int x) {
  return x * x;
}

void error(std::string s) {
  throw std::runtime_error(s);
}

/***************** Action ***************************/

int main1() {

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

  // using print square numbers
  for (int j = 0; j < 5; ++j) print_square(j);

  // vectors
  std::vector<int> v_int = {2, 44, 543, 23, 1}; // vector of 6 ints
  std::vector<std::string> philosophers = {"Kant", "Plato", "Hume", "Kierkegaard"};
  // traversing vectors :)
  for (int p_count = 0; p_count < philosophers.size(); ++p_count) {
    std::cout << philosophers[p_count] << "\t";
    if (p_count == philosophers.size() - 1) std::cout << "\n";
  }
  // initialising vectors
  std::vector<int> v_init(6); // 6 ints intitialised to 0
  std::vector<int> v_empty;
  // adding to vectors
  v_empty.push_back(45);
  v_empty.push_back(55);
  std::cout << v_empty.size() << "\n"; // can check size

  // read loops
  std::vector<double> temps;
  // for (double temp; std::cin >> temp; ) temps.push_back(temp);
  // can use anything that isn't an integer to Stroustrap

  int temp = 8; // for loop limits scope of temp to loop

  // using control flow to compute average temperature
  /*****************************************
  for (double temp; std::cin >> temp; )
    temps.push_back(temp);
  double sum = 0;
  for (int term : temps) sum += term;
  std::cout << "Average temperature: " << sum/temps.size() << std::endl; ******************************/

  /**** First use of sort *************
  std::vector<std::string> words;
  for(std::string temp; std::cin >> temp; )
    words.push_back(temp);
  std::sort(words.begin(), words.end());
  *************************************/

  // error handling
  int x_now = 0;
  int y_now = 0;
  std::cin >> x_now >> y_now;
  if (x_now <= 0) error("non-positive x");
  if (y_now <= 0) error("non-positive y");

  return 0;
} 

