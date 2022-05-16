// https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/cpp
#include <vector>
using namespace std;
vector<int> MonkeyCount(int n) {
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    ans.push_back(i);
  }
  return ans;
}
