#include <iostream>
#include "headers/classes.h"


int main() {
  Derived a(5);
  // a.printValue();

  ExampleDerives eD;
  // std::cout << eD.x_ << std::endl; // bad
  std::cout << eD.ExampleA::x_ << '\n'
            << eD.ExampleB::x_ << std::endl; // good
  
  // std::cout << eD.x_ << std::endl;
  return 0;
}
