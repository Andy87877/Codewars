// https://www.codewars.com/kata/5a905c2157c562994900009d/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std; 

vector <int> productArray (vector <int> numbers){
  ll total = 1;
  for (auto i: numbers) {
    total *= i;
  }
  vector <int> ans;
  for (auto i: numbers) {
    ans.push_back(total/i);
  }
  return ans;
}
