// https://www.codewars.com/kata/5ac6932b2f317b96980000ca/train/cpp
#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std; 

ll minValue (vector <int> values){
  map<ll,ll> ma;
  for (auto i: values) {
    ma[i]++;
  }
  vector<ll> a;
  for (auto i: ma) {
    a.push_back(i.first);
  }
  sort(a.begin(), a.end());
  
  string ans = "";
  for (auto i: a) {
    ans += to_string(i);
  }
  
  ll num;
  stringstream ss;
  ss << ans;
  ss >> num;
  return num;
}
