// https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
  double ans = a-b;
  if ((ans <= 0.001) && (ans >= -0.001)) {
    return true;
  } else {
    return false;
  }
}
