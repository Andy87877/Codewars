// https://www.codewars.com/kata/585a1a227cb58d8d740001c3/train/cpp
#include <string>
using namespace std;
string repeater(string str, int n) {
  string ans = "";
  for (int i = 0; i < n; i++) {
    ans += str;
  }
  return ans;
}
