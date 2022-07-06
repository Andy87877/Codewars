// https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool is_isogram(string str) {
  map<char,int> ma;
  cout << str << "\n";
  for (auto i: str) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      ma[i]++;
      if (ma[i] == 2) {
        return false;
      }
    } else if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ma[char(int(i)+32)]++;
      if (ma[char(int(i)+32)] == 2) {
        return false;
      }
    }
  }
  return true;
}
