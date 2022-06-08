// https://www.codewars.com/kata/5a512f6a80eba857280000fc/train/cpp
#include <vector>
using namespace std ;

int nthSmallest (vector<int> passed , int nSmallest) {
  sort(passed.begin(), passed.end());
  return passed[nSmallest-1];
}
