// https://www.codewars.com/kata/5ce6728c939bf80029988b57/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool solve(string s){
  map<char,int> ma;
  for (auto i: s) {
    ma[i]++;
  }
  vector<char> vec;
  for (auto i: ma) {
    vec.push_back(i.first);
    if (i.second >= 2) {
      return false;
    }
  }
  sort(vec.begin(), vec.end());
    
  for (int i = 0; i < vec.size()-1; i++) {
    cout << vec[i];
    if ((int(vec[i+1])-int(vec[i])) != 1) {
      cout << "\n";
      return false;
    }
  }
  cout << "\n";
  return true;
}
