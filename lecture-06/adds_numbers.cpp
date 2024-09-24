#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
NumericVector add_vectors(NumericVector a, NumericVector b) {

  NumericVector c(a.size());

  for(int i = 0; i < a.size(); i++) {
    c[i] = a[i] + b[i];
  }

  return c;
}

// [[Rcpp::export]]
Rcpp::NumericVector add_vectors2(
    Rcpp::NumericVector & a,
    const Rcpp::NumericVector & b
) {

  a = a + 1;

  if (a.size() != b.size())
    Rcpp::stop("Adding two vectors of different size!");

  return a + b;
}

/*** R
add_vectors(1:5, 1:5)

a <- 1:5
add_vectors2(a, 1:5)
a
*/


