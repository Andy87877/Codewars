// https://www.codewars.com/kata/5865cff66b5699883f0001aa/train/cpp

#include <string>
using namespace std;
string to_time(unsigned seconds) {
  int hour, min;
  string ans;
  min = (seconds/60)%60;
  hour = seconds / 3600;
  ans = to_string(hour);
  ans += " hour(s) and ";
  ans += to_string(min);
  ans += " minute(s)";
  return ans;
}
