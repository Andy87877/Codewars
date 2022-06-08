// https://www.codewars.com/kata/520b9d2ad5c005041100000f/train/cpp
#include <vector>
using namespace std;
string pig_it(string str){
  cout << str << endl;
  vector<string> a;
  string temp = "";
  for (auto i:str) {
    if (i == ' ') {
      a.push_back(temp);
      temp = "";
    } else {
      temp += i;
    }
  }
  a.push_back(temp);
  
  string ans = "";
  bool flag;
  for (int i = 0; i < a.size(); i++) {
    temp = a[i];
    flag = false;
    for (int j = 1; j < temp.size(); j++) {
      ans += temp[j];
      if (((int(temp[j]) >= int('a')) && (int(temp[j]) <= int('z'))) || ((int(temp[j]) >= int('A')) && (int(temp[j]) <= int('Z')))) {
      } else {
        flag = true;
      }
    }
    ans += temp[0];
    if (((int(temp[0]) >= int('a')) && (int(temp[0]) <= int('z'))) || ((int(temp[0]) >= int('A')) && (int(temp[0]) <= int('Z')))) {
    } else {
      flag = true;
    }
    if (!flag) {
      ans += "ay";
    }
    if (i != a.size()-1) {
      ans += " ";
    }
  }
  return ans;
}
