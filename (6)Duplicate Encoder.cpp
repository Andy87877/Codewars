// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp
#include <bits/stdc++.h>
using namespace std;

string duplicate_encoder(const string& word){
  cout << word << "\n";
  map<char, int> ma;
  for (auto i: word) {
    if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ma[char(int(i)+32)]++;
    }
    ma[i]++;
  }
  string ans = "";
  for (auto i: word) {
    char s = i;
    if ((int(s) >= int('A')) && (int(s) <= int('Z'))) {
      s = char(int(i)+32);
    }
    if (ma[s] == 1) {
      ans += "(";
    } else {
      ans += ")";
    }
  }
  return ans;
}
