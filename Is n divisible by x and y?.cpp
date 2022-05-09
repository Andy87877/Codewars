// https://www.codewars.com/kata/5545f109004975ea66000086/train/cpp
bool isDivisible(int n, int x, int y) {
  if ((n % x == 0) && (n % y == 0)) {
    return true;
  } else {
    return false;
  }
}
