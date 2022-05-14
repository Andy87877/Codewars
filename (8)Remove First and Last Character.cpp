// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp
#include <string>
using namespace std; 

string sliceString (string str) {
  string ans = "";
  for (int i = 1; i < str.size()-1; i++) {
    ans += str[i];
  }
  return ans;
}
