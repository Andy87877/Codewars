// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
#include <string>
#include <vector>
using namespace std;

vector<string> solution(const string &s) {
  vector<string> ans;
  if (s.size() == 0) {
    return ans;
  }
  string str = "";
  str += s[0];
  
  for (int i = 1; i < s.size(); i++) {
    if ((i % 2) == 0) {
      ans.push_back(str);
      str = s[i];
    } else {
      str += s[i];
    }
  }
  
  if (str.size() == 1) {
    str += "_";
  }
  ans.push_back(str);
  
  return ans;
}
