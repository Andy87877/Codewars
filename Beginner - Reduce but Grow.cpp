// https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp
#include <vector>
using namespace std;
int grow(vector<int> nums) {
  long long ans = 1;
  for (auto i: nums) {
    ans *= i;
  }
  return ans;
}
