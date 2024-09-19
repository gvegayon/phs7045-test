#include "binom.hpp"


int main() {

  Binom b(10, 0.5);

  std::cout << "Q1: Factorials" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << b.factorial(i + 1) << std::endl;
  }

  std::cout << "Q2 choose" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << b.choose(10, i + 1) << std::endl;

  }

  std::cout << "Q3 dbinom" << std::endl;
  for (int i = 0; i < 11; i++) {
    std::cout << b.dbinom(i) << std::endl;
  }

  return 0;

}
