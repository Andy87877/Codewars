// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp
#include <string>
using namespace std;
bool isPalindrom (const std::string& str){
  string st = "";
  for (int i = 0; i < str.size(); i++) {
    if ((int(str[i]) >= int('a')) && (int(str[i]) <= int('z'))) {
      st += char(int(str[i] + (int('A')-int('a'))));
    } else {
      st += str[i];
    }
  }
  for (int i = 0; i < st.size(); i++) {
    if (st[i] != st[st.size()-i-1]) {
      return false;
    }
  }
  return true;
}
