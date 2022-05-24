// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
#include <string> 
using namespace std;
bool is_uppercase(const string &s) {
  for (int i = 0; i < s.size(); i++) {
    if ((int(s[i]) >= int('a')) && (int(s[i]) <= int('z'))) {
      return false;
    }
  }
  return true;
}
