// https://www.codewars.com/kata/5a29a0898f27f2d9c9000058/train/cpp
#include <vector>
#include <string>
using namespace std;

vector<int> solve(string s){
    int upper = 0, lower = 0, num = 0, spe = 0;
    for (int i = 0; i < s.size(); i++) {
      if (('9' >= s[i]) && (s[i] >= '0')) {
        num++;
      } else if (('Z' >= s[i]) && (s[i] >= 'A')) {
        upper++;
      } else if (('z' >= s[i]) && (s[i] >= 'a')) {
        lower++;
      } else {
        spe++;
      }
    }
    return {upper, lower, num, spe};
}
