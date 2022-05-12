// https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/cpp
#include <vector>
using namespace std;

vector<int> countBy(int x,int n){
  vector<int> ans;
  for (int i = x; i <= x*n; i += x) {
    ans.push_back(i);
  }
  return ans;
}
