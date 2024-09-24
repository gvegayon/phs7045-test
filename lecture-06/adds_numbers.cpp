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
NumericVector add_vectors2(NumericVector a, NumericVector b) {
  return a + b;
}

/*** R
add_vectors(1:5, 1:5)
add_vectors2(1:5, 1:5)
*/


