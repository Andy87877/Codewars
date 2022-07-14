// https://www.codewars.com/kata/51675d17e0c1bed195000001/train/cpp
#include <bits/stdc++.h>
using namespace std;

int largest_five_digits(const string &digits){
  string now, ans = "00000";
  stringstream ss;
  
  for (int i = 0; i < digits.size()-4; i++) {
    now = digits.substr(i,5);
    cout << now << "\n";
    for (int j = 0; j < 5; j++) {
      if (now[j] > ans[j]) {
        ans = now;
        break;
      } else if (now[j] < ans[j]) {
        break;
      }
    }
  }
  
  int ansnum=0;
  ss << ans;
  ss >> ansnum;
  return ansnum;
}
