// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp
#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll countBits(ll n){
  ll ans = 0;
  while (n > 0) {
    if (n%2) {
      ans++;
    }
    n /= 2;
  }
  return ans;
}
