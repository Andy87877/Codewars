// https://www.codewars.com/kata/5a91a7c5fd8c061367000002/train/cpp
#include <bits/stdc++.h>
using namespace std; 

int minimumSteps (vector <int> numbers ,  int input){
  sort(numbers.begin(), numbers.end());
  int total = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if (total >= input) return i-1;
    total += numbers[i];
  }
  return numbers.size()-1;
}
