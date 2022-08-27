// https://www.codewars.com/kata/546f922b54af40e1e90001da/train/cpp
#include <bits/stdc++.h>
using namespace std;

string alphabet_position(const string &text) {
  string ans = "";
  for (auto i: text) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      ans += to_string(int(i)-int('a')+1) + " ";
    } else if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ans += to_string(int(i)-int('A')+1) + " ";
    }
  }
  if (ans != "") {
    ans.pop_back();
  }
  return ans;
}
