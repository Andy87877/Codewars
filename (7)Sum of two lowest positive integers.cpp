// https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
#include <vector>
#include <algorithm>
using namespace std;

long sumTwoSmallestNumbers(vector<int> numbers) {
  sort(numbers.begin(), numbers.end());
  return numbers[0]+numbers[1];
}
