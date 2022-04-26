// https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp
#include <sstream>
#include <string>
using namespace std;

std::string likes(const std::vector<std::string> &names) {
  int l = names.size();
  string s;
    
  if (l == 0) {
    s = "no one likes this";
  } else if (l == 1) {
    s = names[0] + " likes this";
  } else if (l == 2) {
    s = names[0] + " and " + names[1] + " like this";
  } else if (l == 3) {
    s = names[0] + ", " + names[1] + " and " + names[2] + " like this";
  } else {
    string num;
    stringstream ss;
    ss << l-2;
    ss >> num;
    s = names[0] + ", " + names[1] + " and " + num + " others like this";
  }
  return s;
}
