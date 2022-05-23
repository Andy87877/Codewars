// https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp
#include <string>
using namespace std;
string removeExclamationMarks(string str){
  string ans = "";
  for (auto i: str) {
    if (i != '!') {
      ans += i; 
    }
  }
  return ans;
}
