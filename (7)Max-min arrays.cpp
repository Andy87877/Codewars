// https://www.codewars.com/kata/5a090c4e697598d0b9000004/train/cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>v) {
  sort(v.begin(), v.end());
  vector<int> ans;
  for (int i = 0; i < v.size()/2; i++) {
    ans.push_back(v[v.size()-i-1]);
    ans.push_back(v[i]);
  }
  if (v.size()%2) ans.push_back(v[v.size()/2]);
  return ans;
}
