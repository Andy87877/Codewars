// https://www.codewars.com/kata/55b051fac50a3292a9000025/train/cpp
#include <string>
#include <sstream>
using namespace std;
long long filter_string(const string &value) {
  string ans = "";
  stringstream ss;
  for (auto i: value) {
    if ((int(i) >= int('0')) && (int(i) <= int('9'))) {
      ans += i;
    }
  }
  long long num;
  ss >> ans;
  ss << num;
  return num;
}
