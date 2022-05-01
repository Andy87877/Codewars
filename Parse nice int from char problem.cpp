// https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/cpp
#include <string>
#include <sstream>
using namespace std;

int get_age(const string& she_said) {
    stringstream ss;
    char s;
    s = she_said[0];
  
    int ans;
    ss << s;
    ss >> ans;
  
    return ans;
}
