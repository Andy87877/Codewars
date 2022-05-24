// https://www.codewars.com/kata/57d814e4950d8489720008db/train/cpp
#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
  if (vector.size()-1 < n) {
    return -1;
  } else {
    return pow(vector[n],n);
  }
}
