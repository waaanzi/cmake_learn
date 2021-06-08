#include <iostream>
#include "TutorialConfig.h" // cmake时会自动生成

#ifdef USE_MYMATH
  #include "MathFunctions.h"
#endif

int main() {
#ifdef USE_MYMATH
  int out = mysqrt(1);
  std::cout << "USE_MYMATH defined" << std::endl;
#else
  int out = sqrt(1);
  std::cout << "USE_MYMATH undefined" << std::endl;
#endif 
  std::cout << "sqrt of 1 =" << out << std::endl;
  return 0;
}