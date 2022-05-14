// https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp
#include <vector>
using namespace std;
bool betterThanAverage(vector<int> classPoints, int yourPoints) {
  int total = 0;
  for (auto i: classPoints) {
    total += i;
  }
  double ans = total;
  ans /= classPoints.size();
  if (ans < yourPoints) {
    return true;
  } else {
    return false;
  }
}
