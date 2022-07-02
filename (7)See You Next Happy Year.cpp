// https://www.codewars.com/kata/5ae7e3f068e6445bc8000046/train/cpp
#include <bits/stdc++.h>
#define USI unsigned short int
using namespace std;

bool judge(USI num) {
  string s = to_string(num);
  map<char, int> ma;
  for (auto i: s) {
    ma[i]++;
  }
  
  if (ma.size() == 4) {
    return true;
  }
  return false;
}

USI nextHappyYear (USI year) {
  cout << year << "\n";
  for (USI i = year+1; i <= 9999; i++) {
    if(judge(i)) {
      return i;
    }
  }
  
  return 0;
}
