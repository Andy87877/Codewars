// https://www.codewars.com/kata/56170e844da7c6f647000063/train/cpp
#include <string>
using namespace std;
string people_with_age_drink(int age) {
  if (age < 14) {
    return "drink toddy";
  } else if (age < 18) {
    return "drink coke";
  } else if (age < 21) {
    return "drink beer";
  } else {
    return "drink whisky";
  }
}
