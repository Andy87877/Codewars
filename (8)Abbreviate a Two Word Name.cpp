// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/cpp
#include <string>
using namespace std;
string abbrevName(string name) {
  string ans;
  
  if ((int(name[0]) >= int('a')) && (int(name[0]) <= int('z'))) {
    ans = char(int(name[0])+(int('A')-int('a')));
  } else {
    ans = name[0];
  }
    
  ans += ".";
  
  for (int i = 1; i < name.size(); i++) {
    if (name[i-1] == ' ') {
      if ((int(name[i]) >= int('a')) && (int(name[i]) <= int('z'))) {
        ans += char(int(name[i])+(int('A')-int('a')));
      } else {
        ans += name[i];
      }
    }
  }
  return ans;
}
