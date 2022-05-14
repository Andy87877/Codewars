// https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp
#include <vector>
using namespace std;

int sum(std::vector<int> nums) {
  long long total = 0;
  for (auto i: nums) {
    total += i;
  }
  return total;
}
