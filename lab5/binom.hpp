#ifndef BINOM_HPP
#define BINOM_HPP

#include <iostream> // Needed for cout / printf
#include <cmath>    // Needed for pow

class Binom {
private:
  int n;
  double p;

public:
  // Binom(int n_, double p_) : n(n_), p(p_) {};
  Binom(int n_, double p_) {
    n = n_;
    p = p_;
  };
  int factorial(int k) const;
  double choose(int a, int b) const;
  double dbinom(int k) const;
  void print(int k) const;
};


inline int Binom::factorial(int k) const {

  if (k <= 1)
    return 1;

  return this->factorial(k - 1) * k;

}

inline double Binom::choose(int a, int b) const {

  return static_cast<double>(this->factorial(a))/(
      static_cast<double>(factorial(a - b)) *
      static_cast<double>(factorial(b))
  );

}

inline double Binom::dbinom(int k) const {

  return choose(n, k) *
    std::pow(p, k) * std::pow(1 - p, n - k);

}

#endif
