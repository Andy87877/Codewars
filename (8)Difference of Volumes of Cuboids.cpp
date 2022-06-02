// https://www.codewars.com/kata/58cb43f4256836ed95000f97/train/cpp
#include <array>
#include <cmath>
using namespace std;

int findDifference(array<int, 3> a, array<int, 3> b) {
  return abs((a[0]*a[1]*a[2])-(b[0]*b[1]*b[2]));
}
