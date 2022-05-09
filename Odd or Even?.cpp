// https://www.codewars.com/kata/5949481f86420f59480000e7/train/cpp
#include <string>
#include <vector>
using namespace std;
string odd_or_even(const vector<int> &arr) {
  int total = 0;
  for (int i: arr) {
    total += i;
  }  
  if (total % 2 == 0) {
    return "even";
  } else {
    return "odd";
  }
}
