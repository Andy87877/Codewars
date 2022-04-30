// https://www.codewars.com/kata/56b29582461215098d00000f/train/cpp
#include <vector>
#define ll long long
using namespace std;

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  vector<int> vec;
  ll max = nums[0], min = nums[0];
  
  for (ll i: nums) {
    if (max < i) {
      max = i;
    } 
    if (min > i) {
      min = i;
    }
  }
  
  for (ll i = min; i <= max; i++) {
    vec.push_back(i);
  }
  return vec;
}
