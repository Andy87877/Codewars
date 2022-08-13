// https://www.codewars.com/kata/61123a6f2446320021db987d/train/cpp
#include <bits/stdc++.h>
using namespace std;

int prev_mult_of_three (int n) {
  string s = to_string(n);
  while (s.size()) {
    if ((stoi(s)%3) == 0) {
      return stoi(s);
    }
    s.pop_back();
  }
  return -1;
}
