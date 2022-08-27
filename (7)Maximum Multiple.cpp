// https://www.codewars.com/kata/5aba780a6a176b029800041c/train/cpp
#include <bits/stdc++.h>
using namespace std;

int maxMultiple(int divisor, int bound) {
  cout << divisor << " " << bound << "\n";
  for (int i = bound; i >= 2; i--) {
    if (i%divisor == 0) {
      return i;
    }
  }
}
