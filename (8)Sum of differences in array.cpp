// https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/cpp
#include <vector>
#include <algorithm>
using namespace std;

int sumOfDifferences(const vector<int>& arr){
  vector<int> ans = arr;
  sort(ans.begin(), ans.end());
  
  long long total = 0;
  for (int i = 1; i < ans.size(); i++) {
    total += ans[i-1]-ans[i];
  }
  return total*-1;
}
