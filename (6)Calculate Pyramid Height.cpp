// https://www.codewars.com/kata/56968ce7753513604b000055/train/cpp
#include <bits/stdc++.h>
#define ll unsigned int
using namespace std;

ll pyramidHeight(ll n) {
  ll total = 0, temp = 0;
  cout << n << "\n";
  while(total < n) {
    temp++;
    total += temp*temp;
  }
  if (total != n) {
    temp--;
  }
  return temp;
}
