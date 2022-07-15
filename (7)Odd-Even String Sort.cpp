// https://www.codewars.com/kata/580755730b5a77650500010c/train/cpp
#include <bits/stdc++.h>
using namespace std;

string sortMyString(const string &s){
  string ans = "";
  for (int i = 0; i < s.size(); i+=2) {
    ans += s[i];
  }
  ans += " ";
  for (int i = 1; i < s.size(); i+=2) {
    ans += s[i];
  }
  return ans;
}
