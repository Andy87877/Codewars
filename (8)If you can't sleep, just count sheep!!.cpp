// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/cpp
#include <string>
#include <sstream>
using namespace std;
string countSheep(int number) {
  stringstream ss;
  string ans = "", s;
  for (int i = 1; i <= number; i++) {
    ss.clear();
    ss << i;
    ss >> s;
    s +=" sheep...";
    ans += s;
  }
  return ans;
}
