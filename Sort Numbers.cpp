// https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/cpp
#include <vector>
using namespace std;

std::vector<int> solution(std::vector<int> nums) {
  int temp;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i; j < nums.size(); j++) {
      if (nums[i] > nums[j]) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
  return nums;
}
