// https://www.codewars.com/kata/55edaba99da3a9c84000003b/train/cpp
#include <vector>
using namespace std;
vector<int> divisible_by(vector<int> numbers, int divisor) {
  vector<int> ans;
  for (auto i: numbers){
    if (!(i%divisor)){
      ans.push_back(i);
    }
  }
  return ans;
}
