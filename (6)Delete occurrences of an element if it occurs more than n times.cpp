// https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp
#include <vector>
#include <map>
using namespace std;

std::vector<int> deleteNth(std::vector<int> arr, int n) {
  map<int, int> ma;
  vector<int> ans;
  for (auto i: arr) {
    ma[i]++;
    // cout << ma[i];
    if (ma[i] <= n) {
      ans.push_back(i);
    }
  }
  return ans;
}
