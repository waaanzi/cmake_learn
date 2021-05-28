#include <iostream>
#include "TutorialConfig.h" // cmake时会自动生成

int main() {
  std::cout << "version:" << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
  return 0;
}