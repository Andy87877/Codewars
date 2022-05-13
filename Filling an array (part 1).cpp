// https://www.codewars.com/kata/571d42206414b103dc0006a1/train/cpp
#include <vector>
using namespace std;
vector<int> arr(int n = 0) {
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    ans.push_back(i);
  }
  return ans;
}
