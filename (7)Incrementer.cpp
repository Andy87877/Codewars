// https://www.codewars.com/kata/590e03aef55cab099a0002e8/train/cpp
#include <vector>
using namespace std;

vector<int> incrementer(vector<int> nums){
  for (int i = 0; i < nums.size(); i++) {
    nums[i] = ((nums[i] + ((i+1)%10))%10);
  }
  return nums;
}
