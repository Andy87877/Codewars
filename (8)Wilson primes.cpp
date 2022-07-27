// https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/cpp
#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

bool amIWilson(unsigned n) {
  vector<ll> a = {5, 13, 563, 5971, 558771, 1964215, 8121909, 12326713, 23025711, 26921605, 341569806, 399292158};
  for (auto i: a) {
    if (n == i) {
      return true;
    }
  }
  return false;
}
/*
5, 13, 563, 5971, 558771, 1964215, 8121909, 12326713, 23025711, 26921605, 341569806, 399292158
wiki
*/
