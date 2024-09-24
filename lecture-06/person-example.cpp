#include <Rcpp.h>

class Person {
public:
  Person(std::string name, int age) :
  name(name), age(age) {}
  std::string get_name() const { return name; }
  int get_age() const { return age; }
  void print() const {Rprintf(
      "%s is %d years old\n", name.c_str(), age);
  }

private:
  std::string name;
  int age;
};

// [[Rcpp::export]]
Rcpp::XPtr<Person> create_person(
    std::string name, int age
) {
  Rcpp::XPtr<Person> person(new Person(name, age));

  // Adding an attribute
  person.attr("class") = "MyPerson";

  return person;
}

// [[Rcpp::export]]
std::string get_name(SEXP person) {
  Rcpp::XPtr<Person> p(person);
  return p->get_name();
}

// [[Rcpp::export]]
int print_person(SEXP person) {
  Rcpp::XPtr<Person> p(person);
  p->print();
  return 0;
}

/*** R

# This is an S3 method for printing MyPerson
print.MyPerson <- function(x) {
  print_person(x)
}

george <- create_person("george", 123)

# These two are equivalent
george
print(george)
*/
