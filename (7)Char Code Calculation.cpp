// https://www.codewars.com/kata/57f75cc397d62fc93d000059/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int calc(const string& x) {
  string total = "";
  ll ans = 0;
  stringstream ss;
  for (auto i: x) {
    total += to_string(int(i));
  }
  for (auto i: total) {
    if (i == '7'){
      ans++;
    }
  }
  ans*=6;
  
  return ans;
}
