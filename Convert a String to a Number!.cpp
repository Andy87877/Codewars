// https://www.codewars.com/kata/544675c6f971f7399a000e79/train/cpp
#include <string>
#include <sstream>
using namespace std;

int string_to_number(const string& s) {
  stringstream ss;
  int num;
  ss << s;
  ss >> num;
  return num;
}
