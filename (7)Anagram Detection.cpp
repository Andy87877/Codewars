// https://www.codewars.com/kata/529eef7a9194e0cbc1000255/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string test, string original){
//   cout << test << " " << original << "\n";
  map<char, int> ma;
  for (auto i: test) {
    i = toupper(i);
    ma[i]++;
  }
  for (auto i: original) {
    i = toupper(i);
    ma[i]--;
  }
  for (auto i: ma) {
//     cout << i.first << " " << i.second << "\n";
    if (i.second != 0) {
      return false;
    }
  }
  return true;
}
