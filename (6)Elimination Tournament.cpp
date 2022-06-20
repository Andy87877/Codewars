// https://www.codewars.com/kata/5f631ed489e0e101a70c70a0/train/cpp
#include <vector>
using namespace std;
vector<vector<int>> tourney(const vector<int>& input) {
  vector<vector<int>> ans;
  vector<int> now;
  for (auto i: input) {
    now.push_back(i);
  }
  
  ans.push_back(now);
  while (now.size() >= 2) {
    vector<int> temp;
    if (now.size()%2) {
      temp.push_back(now[now.size()-1]);
    }
    for (int i = 0; i < now.size(); i+=2) {
      if (now[i] > now[i+1]) {
        temp.push_back(now[i]);
      } else {
        temp.push_back(now[i+1]);
      }
    }
    if (now.size()%2) {
      temp.pop_back();
    }
    now = temp;
    ans.push_back(now);
  }
  return ans;
}
