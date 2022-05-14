// https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp
#include <vector>
using namespace std;
std::vector<int> move_zeroes(const std::vector<int>& input) {
  vector<int> ans;
  int zero = 0;
  for (auto i: input) {
    if (i != 0) {
      ans.push_back(i);
    } else {
      zero++;
    }
  }
  for (int i = 0; i < zero; i++) {
    ans.push_back(0);
  }
  return ans;
}