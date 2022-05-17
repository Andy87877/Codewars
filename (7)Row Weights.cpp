// https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/cpp
#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights) {
  pair<int,int> ans = {0,0};
  for (int i = 0; i < weights.size(); i++) {
    if (i%2) {
      ans.second += weights[i];
    } else {
      ans.first += weights[i];
    }
  }
  return ans;
}
