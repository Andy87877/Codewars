// https://www.codewars.com/kata/5f70c883e10f9e0001c89673/train/cpp
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> flip(const char dir, const vector<int>& arr) {
  vector<int> a;
  a = arr;
  if (dir == 'R'){
    sort(a.begin(),a.end());
  } else {
    sort(a.rbegin(),a.rend());
  }
  return a;
}
