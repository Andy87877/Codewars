// https://www.codewars.com/kata/5a04133e32b8b998dc000089/train/cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> array){
  vector<int> ans;
  for (int i = 0; i < array.size(); i++) {
    bool flag = true;
    for (int j = i+1; j < array.size(); j++) {
      if (array[i] <= array[j]) {
        flag = false;
        break;
      } 
    }
    if (flag) {
      ans.push_back(array[i]);
    }
  }
  return ans;
}
