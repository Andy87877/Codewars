// https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7/train/cpp
#include <string>
using namespace std;

bool isOpposite(const string& s1, const string& s2) {
  cout << s1 << " " << s2 << "\n";
  if (s1.size() != s2.size()) {
    return false;
  }
  if (s1.size() == 0) {
    return false;
  }
  
  for (int i = 0; i < s1.size(); i++) {
    if (abs(int(s1[i])-int(s2[i])) != 32) {
      return false;
    }
  }
  return true;
}

