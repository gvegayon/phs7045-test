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

  if (n <= 1)
    return 1;

  return this->factorial(n - 1) * n;

}

inline double Binom::choose(int a, int b) const {

  // double a_dbl = (double) a;
  // double b_dbl = static_cast<double>(b);

  return this->factorial(a)/(
      factorial(a - b) * factorial(b)
  );

}

#endif
