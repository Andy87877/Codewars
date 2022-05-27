// https://www.codewars.com/kata/5966e33c4e686b508700002d/train/cpp
#include <sstream>
#include <string>
#define ll long long
using namespace std;

string sum_str(const string& a, const string& b) {
  stringstream ss;
  ll c,d, ans;
  ss << a;
  ss >> c;
  if (a == "") {
    c = 0;
  }
  ss.clear();
  ss << b;
  ss >> d;
  if (b == "") {
    d = 0;
  }
  ans = c+d;
  return to_string(ans);
}
