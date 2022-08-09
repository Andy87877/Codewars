// https://www.codewars.com/kata/5a7893ef0025e9eb50000013/train/cpp
#include <bits/stdc++.h>
using namespace std; 

int maxGap (vector <int> numbers){
  sort(numbers.rbegin(), numbers.rend());
  int min = numbers[0]-numbers[1];
  for (int i = 1; i < numbers.size()-1; i++) {
    if ((numbers[i]-numbers[i+1]) > min) {
      min = numbers[i]-numbers[i+1];
    }
  }
  return min;
}
