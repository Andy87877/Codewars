// https://www.codewars.com/kata/5a045fee46d843effa000070/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

string decomp(int n) {
  ll temp = 0;
  map<ll,ll> ma;
  for (ll i = 2; i <= n; i++) {
    bool flag = true;
    ll temp = i;
    for (auto j: ma) {
      while ((temp % j.first) == 0) {
        flag = false;
        ma[j.first]++;
        temp /= j.first;
      }
    }
    if (flag) {
      ma[i]++;
    }
  }
  
  string ans;
  for (auto i: ma) {
    ans += to_string(i.first);
    if (i.second != 1) {
      ans += "^";
      ans += to_string(i.second);
    }
    ans += " * ";
  }
  ans.pop_back(); ans.pop_back(); ans.pop_back();
  cout << ans << "\n";
  return ans;
}
