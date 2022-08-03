// https://www.codewars.com/kata/59f061773e532d0c87000d16/train/cpp
#include <bits/stdc++.h>
using namespace std;

int elevator_distance(vector<int> array) {
  int total = 0;
  for (int i = 0; i < array.size()-1; i++) {
    total += abs(array[i]-array[i+1]);
  }
  return total;
}
