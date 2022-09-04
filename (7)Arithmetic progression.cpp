// https://www.codewars.com/kata/55caf1fd8063ddfa8e000018/train/cpp
#include <bits/stdc++.h>
using namespace std;

string arithmeticSequenceElements(int a, int d, int n){
  string ans = "";
  int temp = a;
  for (int i = 0; i < n; i++) {
    ans += to_string(temp) + ", ";
    temp += d;
  }
  ans.pop_back(); ans.pop_back();
  return ans;
}
