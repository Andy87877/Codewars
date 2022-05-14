// https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/cpp
#include <vector>
using namespace std;
int grow(vector<int> nums) {
  long long ans = 1;
  for (auto i: nums) {
    ans *= i;
  }
  return ans;
}
