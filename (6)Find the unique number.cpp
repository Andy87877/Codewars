// https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/cpp
#include <bits/stdc++.h>
using namespace std;

float find_uniq(const vector<float> &v){
  map<float, int> ma;
  for (auto i: v) {
    ma[i]++;
    if (ma.size() == 2) {
      if (ma[i] == 1) {
        return i;
      }
    }
  }
  return v[0];
}
