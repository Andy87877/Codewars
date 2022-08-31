// https://www.codewars.com/kata/58b8c94b7df3f116eb00005b/train/cpp
#include <bits/stdc++.h>
using namespace std;

string reverse_letter(const string &str){
  string temp = "";
  for (auto i: str) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      temp += i;
    }
  }
  string ans = "";
  for (int i = temp.size()-1; i >= 0; i--) {
    ans += temp[i];
  }
  return ans;
}
