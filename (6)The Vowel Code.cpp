// https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp
#include <string>
#include <map>
using namespace std;

map<char, char> judge = {
  {'a','1'},
  {'e','2'},
  {'i','3'},
  {'o','4'},
  {'u','5'}
};

string encode(const string &str) {
  string ans = str;
  for (int i = 0; i < ans.size(); i++) {
    for (auto j: judge) {
      if (ans[i] == j.first) {
        ans[i] = j.second;
      }
    }
  }
  return ans;
}

string decode(const string &str) {
  string ans = str;
  for (int i = 0; i < ans.size(); i++) {
    for (auto j: judge) {
      if (ans[i] == j.second) {
        ans[i] = j.first;
      }
    }
  }
  return ans;
}
