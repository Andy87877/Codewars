// https://www.codewars.com/kata/5f77d62851f6bc0033616bd8/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool valid_spacing(const string& s) {
  if (s.size() == 0) {
    return true;
  }
  if ((s[0] == ' ') || (s[s.size()-1] == ' ')) {
    return false;
  }
  for (int i = 1; i < s.size()-1; i++) {
    if (s[i] == ' ') {
      if ((s[i-1] == ' ') || (s[i+1] == ' ' )) {
        return false;
      }
    }
  }
  return true;
}
