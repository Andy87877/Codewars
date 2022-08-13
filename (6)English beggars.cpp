// https://www.codewars.com/kata/59590976838112bfea0000fa/train/cpp
#include <vector>
using namespace std;

vector<int> beggars(const vector<int>& values, unsigned int n){
  vector<int> ans(n);
  if (!n) return {};
  for (int i = 0; i < values.size(); i++) {
    ans[(i%n)] += values[i];
  }
  return ans;
}
