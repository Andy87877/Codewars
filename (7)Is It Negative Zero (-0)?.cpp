// https://www.codewars.com/kata/5c5086287bc6600001c7589a/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool isNegativeZero(float n) {
  string str = to_string(n);
  cout << n << "\n";
  if (str == "-0.000000") {
    if (n == -0) {
      return true;
    }
  }
  return false;
}
