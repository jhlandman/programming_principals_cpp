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
} 