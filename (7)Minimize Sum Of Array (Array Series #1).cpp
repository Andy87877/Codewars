// https://www.codewars.com/kata/5a523566b3bfa84c2e00010b/train/cpp
#include <vector>
using namespace std;

int minSum(vector<int>passed) {
  int ans = 0;
  sort(passed.begin(), passed.end());
  for (int i = 0; i < passed.size()/2; i++) {
    ans += passed[i]*passed[passed.size()-i-1];
  }
  return ans;
}
