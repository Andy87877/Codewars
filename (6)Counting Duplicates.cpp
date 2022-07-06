// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
size_t duplicateCount(const string& in) {// helper for tests
  cout << in << "\n";
  map<char, ll> ma;
  
  for (auto i: in) {
    if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ma[char(int(i)+32)]++;
    } else if (i != ' '){
      ma[i]++;
    }
  }
  
  ll ans = 0;
  for (auto i: ma) {
    cout << i.first << " " << i.second << "\n";
    if (i.second >= 2) {
      ans++;
    }
  }
  return ans;
}; 
*/

size_t duplicateCount(const char* in){ // idk why use char
  string str = in;
  cout << str << "\n";
  
  map<char, ll> ma;
  for (auto i: str) {
    if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ma[char(int(i)+32)]++;
    } else if (i != ' '){
      ma[i]++;
    }
  }
  
  ll ans = 0;
  for (auto i: ma) {
    cout << i.first << " " << i.second << "\n";
    if (i.second >= 2) {
      ans++;
    }
  }
  return ans;
};
