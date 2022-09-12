// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/cpp
#include <bits/stdc++.h>
using namespace std;

pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) {
    for (size_t i = 0; i < numbers.size(); i++) {
      for (size_t j = i+1; j < numbers.size(); j++) {
        if (numbers[i] + numbers[j] == target) {
          return {i,j};
        }
      }
    }
}
