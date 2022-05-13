// codewars.com/kata/57fb09ef2b5314a8a90001ed/train/cpp
#include <string>
using namespace std;

string replace(const string &s){
  char l[10] = {'a','e','i','o','u','A','E','I','O','U'};
  string ans = "";  

  for (char i: s){
    bool flag = true;
    for (char j: l){
      if (i == j) {
        ans += "!";
        flag = false;
      }
    }
    if (flag){
      ans += i;
    }
  }
  return ans;
}
