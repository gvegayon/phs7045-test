#ifndef BINOM_HPP
#define BINOM_HPP

#include <iostream> // Needed for cout / printf
#include <cmath>    // Needed for pow

class Binom {
private:
  int n;
  double p;

public:
  Binom(int n, double p) : n(n), p(p) {};
  int factorial(int n) const;
  double choose(int a, int b) const;
  double dbinom(int k) const;
  void print(int k) const;
};


inline int Binom::factorial(int n) const {
  return n;
}

#endif
