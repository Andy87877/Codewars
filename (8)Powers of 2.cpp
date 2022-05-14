// https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/cpp
#include <vector>
#include <cstdint>
using namespace std;
vector<uint64_t> powers_of_two(int n) {
  vector<uint64_t> ans = {1};
  for (int i = 1; i <= n; i++) {
    ans.push_back(ans[ans.size()-1]*2);
  }
  return ans;
}
