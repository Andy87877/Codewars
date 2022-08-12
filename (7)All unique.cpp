// https://www.codewars.com/kata/553e8b195b853c6db4000048/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool hasUniqueChars(string s) {
  map<char, int> ma;
  for (auto i: s) {
    ma[i]++;
    if (ma[i] >= 2) {
      return false;
    }
  }
  return true;
}
