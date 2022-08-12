// https://www.codewars.com/kata/5d49c93d089c6e000ff8428c/train/cpp
#include <bits/stdc++.h>
using namespace std;

int save(vector<int> sizes, int hd) {
  int total = 0;
  for (int i = 0; i < sizes.size(); i++) {
    total += sizes[i];
    if (total > hd) {
      return i;
    }
  }
  return sizes.size();
}
