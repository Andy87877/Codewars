// https://www.codewars.com/kata/5d5ee4c35162d9001af7d699/train/cpp
#include <vector>
using namespace std;
int sum_of_minimums(const vector<vector<int>> &numbers) {
  long long min, ans = 0;
  for (auto i: numbers) {
    min = i[0];
    for (auto j: i) {
      if (min > j) {
        min = j;
      }
    }
    ans += min;
  }
  return ans;
}
