// https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/cpp
#include <string>
#include <vector>
using namespace std;

vector<string> wave(string y){
  vector<string> ans;
  string s, temp;
  for (int i = 0; i < y.size(); i++) {
    s = "";
    if (y[i] != ' ') {
      for (int j = 0; j < y.size(); j++) {
        if (i == j) {
          temp = char(int(y[j])+int('A')-int('a'));
          s += temp;
        } else {
          s += y[j];
        }
      }
      ans.push_back(s);
    }
    
  }
  return ans;
}
