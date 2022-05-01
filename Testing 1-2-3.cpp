// https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/cpp
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> number(const vector<string> &lines) {
  vector <string> ans;
  string str;
  stringstream ss;
  
  for (int i = 0; i < lines.size(); i++) {
    ss.clear();
    ss << i+1;
    ss >> str;
    
    str += ": ";
    str += lines[i];
    ans.push_back(str);
  }
  return ans;
}
