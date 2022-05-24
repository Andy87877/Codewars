// https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp
using namespace std;
int sequenceSum(int start, int end, int step) {
  long long ans = 0;
  for (int i = start; i <= end; i += step) {
    ans += i;
  }
  return ans;
}
