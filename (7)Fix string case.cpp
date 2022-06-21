// https://www.codewars.com/kata/5b180e9fedaa564a7000009a/train/cpp
#include <string>
using namespace std;

string solve(const string& str){
  long long up = 0, down = 0;
  for (auto i: str) {
    if ((int(i) <= int('Z')) && (int(i) >= int('A'))) {
      up++;
    } else {
      down++;
    }
  }
  cout << str << " " << up << " " << down << "\n";
  string ans = "";
  if (up > down) { 
    // up
    for (auto i: str) {
      if ((int(i) <= int('Z')) && (int(i) >= int('A'))) {
        ans += i;
      } else {
        ans += char(int(i)-32);
      }
    }
  } else {
    for (auto i: str) {
      if ((int(i) <= int('Z')) && (int(i) >= int('A'))) {
        ans += char(int(i)+32);
      } else {
        ans += i;
      }
    }
  }
  return ans;
}
