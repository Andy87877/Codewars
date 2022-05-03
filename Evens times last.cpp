// https://www.codewars.com/kata/5a1a9e5032b8b98477000004/train/cpp
#include <vector>
#define ll long long
using namespace std;

int even_last(vector<int> nums) {
  if (nums.size() <= 0) {
    return 0;
  }
  
  ll total = 0;
  for (ll i = 0; i < nums.size(); i += 2) {
    total += nums[i];
  }
  total *= nums[nums.size()-1];
  return total;
}
