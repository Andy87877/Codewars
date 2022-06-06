// https://www.codewars.com/kata/5841f680c5c9b092950001ae/train/cpp
#include <vector>
using namespace std;
vector<int> generate_integers(int m, int n) {
  vector<int> ans;
  for (int i = m; i <= n; i++) {
    ans.push_back(i);
  }
  return ans;
}
