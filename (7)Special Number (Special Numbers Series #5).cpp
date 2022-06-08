// https://www.codewars.com/kata/5a55f04be6be383a50000187/train/cpp
#include <string>
using namespace std; 

string specialNumber (int number) {
  string ans = to_string(number);
  for (auto i: ans) {
    if (int(i) >= int('6')) {
      return "NOT!!";
    }
  }
  return "Special!!";
}
