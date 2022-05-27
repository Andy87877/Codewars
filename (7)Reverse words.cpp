// https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse_words(string str) {
  string temp = "",ans="";
  vector <string> s;
  
  for (long long i = 0; i < str.size(); i++) {
    if (str[i] != ' ') {
      temp += str[i];
    } else {
      s.push_back(temp);
      s.push_back(" ");
      temp = "";
    }
  }
  s.push_back(temp);
  
  for (int i = 0; i < s.size(); i++) {
    temp = s[i];
    for (int j = temp.size()-1; j >= 0; j--) {
      ans += temp[j];
    }
  }
  return ans;
}
