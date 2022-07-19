// https://www.codewars.com/kata/5a58d889880385c2f40000aa/train/cpp
#include <bits/stdc++.h>
using namespace std; 

string autoMorphic (int number){
  string s1 = to_string(number), s2 = to_string(number*number);
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[i+s2.size()-s1.size()]) {
      return "Not!!";
    }
  }
  return "Automorphic";
}
