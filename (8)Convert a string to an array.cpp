// https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp
#include <vector> 
#include <string>
using namespace std;

vector<string> string_to_array(const string& s) {
  string temp = "";
  vector<string> ans;
  for (auto i: s) {
    if (i == ' ') {
      ans.push_back(temp);
      temp = "";
    } else {
      temp += i;
    }
  }
  ans.push_back(temp);
  return ans;
}
