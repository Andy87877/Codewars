// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/cpp
#include <string>
using namespace std;
string makeUpperCase (const string& input_str) {
  string ans = "";
  for (char i: input_str) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      ans += int(i)+(int('A')-int('a'));
    } else {
      ans += i;
    }
  }
  return ans;
}
