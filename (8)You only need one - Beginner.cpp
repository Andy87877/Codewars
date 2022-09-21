// https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool check(const vector<string>& seq, const string& elem) {
  for (auto i: seq) {
    if (elem == i) {
      return true;
    }
  }
  return false;
}
