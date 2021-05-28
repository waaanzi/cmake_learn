#include <iostream>

int main() {
  auto f = [](){
   std::cout << "C++11, auto & lambda express feature." << std::endl;
  };
  f();
  return 0;
}