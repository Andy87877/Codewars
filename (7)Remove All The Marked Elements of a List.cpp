// https://www.codewars.com/kata/563089b9b7be03472d00002b/train/cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> remove_values(vector<int> integers, vector<int> values) {
  vector<int> ans;
  for (auto i: integers) {
    if (find(values.begin(),values.end(),i) == values.end()) {
      ans.push_back(i);
    }
  }
  return ans;
}
