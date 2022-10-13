// https://www.codewars.com/kata/534d0a229345375d520006a0/train/c
#include <stdbool.h>
#include <math.h>

bool power_of_two(const int x) {
  if (x == 1) return true;
  int i, temp = 2;
  for (i = 1; i <= x; i++) {
    if (temp == x) {
      return true;
    }
    if (temp > x) {
      return false;
    }
    temp *= 2;
  }
}
