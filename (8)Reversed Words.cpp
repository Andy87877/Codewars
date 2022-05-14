// https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp
#include <string>
#include <vector>
using namespace std;
string reverse_words(const string& str) {
  string temp = "", ans;
  vector<string> vec;
  for (auto i: str) {
    if (i == ' ') {
      vec.push_back(temp);
      temp = "";
    } else {
      temp += i;
    }
  }
  vec.push_back(temp);
  
  for (int i = vec.size()-1; i > 0; i--) {
    ans += vec[i];
    ans += " ";
  }
  ans += vec[0];
  return ans;
}
