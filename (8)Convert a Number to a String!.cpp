// https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/cpp
#include <string>
#include <sstream>
using namespace std;

std::string number_to_string(int num) {
  string s;
  stringstream ss;
  ss << num;
  ss >> s;
  return s;
} 
