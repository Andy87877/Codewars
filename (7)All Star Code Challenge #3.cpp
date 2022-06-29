// https://www.codewars.com/kata/58640340b3a675d9a70000b9/train/cpp
#include <string>
using namespace std;

string remove_vowels(const string& str) {
  string ans = "";
  char no[5] = {'a','e','i','o','u'};
  for (auto i: str) {
    bool flag = true;
    for (auto j: no) {
      if (i == j) flag = false;
    }
    if (flag) ans += i;
  }
  return ans;
}
