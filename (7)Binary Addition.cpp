// https://www.codewars.com/kata/551f37452ff852b7bd000139/train/cpp
#include <cstdint>
#include <string>
using namespace std;

string add_binary(uint64_t a, uint64_t b) {
  unsigned long long temp = a + b;
  if (temp == 0) {
    return "0";
  }
  string ans = "", ansend = "";
  while (temp != 0) {
    if (temp % 2) {
      ans += "1";
    } else {
      ans += "0";
    }
    temp /= 2;
  }
  
  for (int i = ans.size()-1; i >= 0; i--) {
    ansend += ans[i];
  }
  return ansend;
}
