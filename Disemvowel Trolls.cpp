// https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp
#include <string>
#include <vector>
using namespace std;

std::string disemvowel(const std::string& str) {
  vector<char> remove{'a','e','i','o','u','A','E','I','O','U'};
  string s = "";
  for (auto i: str) {
    bool flag = true;
    for (auto j: remove) {
      if (i == j) {
        flag = false;
        break;
      }
    }
    if (flag) {
      s += i;
    }
  } 
  return s;
}
