// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/cpp
#include <vector>
using namespace std;

int arrayPlusArray(vector<int> a, vector<int> b) {
  int total = 0;
  for (int i: a) {
    total += i;
  }
  for (int i: b) {
    total += i;
  }
  return total;
}
