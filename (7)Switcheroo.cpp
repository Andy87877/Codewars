// https://www.codewars.com/kata/57f759bb664021a30300007d/train/cpp
#include <string>
using namespace std;
string switcheroo(const string &s) {
  string ans = "";
  for (auto i: s) {
    if (i == 'a') {
      ans += 'b';
    } else if (i == 'b') {
      ans += 'a';
    } else {
      ans += 'c';
    }
  }
  return ans;
}
