// https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/cpp
#include <bits/stdc++.h>
using namespace std;

string twoSort(vector<string> s){
  sort(s.begin(), s.end());
  string str = s[0];
  cout << str << "\n";
  string ans = "";
  for (int j = 0; j < str.size()-1; j++) {
    ans += str[j];
    ans += "***";
  }
  ans += str[str.size()-1];
  return ans;
}
