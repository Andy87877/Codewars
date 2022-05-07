// https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp
#include <string>
using namespace std; 

string reverseString (string str) {
  reverse(str.begin(), str.end());
  return str;
}
