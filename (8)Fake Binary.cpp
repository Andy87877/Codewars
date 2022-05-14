// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp
#include <string>
#include <sstream>
using namespace std;

string fakeBin(string str){
  stringstream ss;
  string ans = "";
  int num;
  
  for (auto i: str) {
    ss.clear();
    ss << i;
    ss >> num;
    if (num >= 5) {
      ans += '1';
    } else {
      ans += '0';
    }
  }
  return ans;
}
