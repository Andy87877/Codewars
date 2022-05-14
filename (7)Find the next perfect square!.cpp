// https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/cpp
#include <cmath>
long int findNextSquare(long int sq) {
  double n;
  n = pow(sq,0.5);
  if (int(n) != n) {
    return -1;
  }
  return pow(n+1,2);
}
