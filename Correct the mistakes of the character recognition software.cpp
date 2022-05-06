// https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp
#include <iostream>
#include <string>
using namespace std;

string correct(string str){
  string ans = "";
  for (char i: str) {
    if (i == '5') {
      ans += "S";
    } else if (i == '0') {
      ans += "O";
    } else if (i == '1') {
      ans += "I";
    } else {
      ans += i;
    }
  }
  return ans;
}
