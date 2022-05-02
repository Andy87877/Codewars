// https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/cpp
using namespace std;
string no_space(string x) {
  string ans = "";
  for (auto i: x) {
    if (i != ' ') {
      ans += i;
    }
  }
  return ans;
}
