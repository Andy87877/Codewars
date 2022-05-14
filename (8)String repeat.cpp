// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp
#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
  string ans = "";
  for (int i = 0; i < repeat; i++) {
    ans += str;
  }
  return ans;
}
