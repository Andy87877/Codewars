// https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/cpp
using namespace std;
vector<int> maps(const vector<int> & values) {
  vector<int> ans;
  for(auto i: values) {
    ans.push_back(i*2);
  }
  return ans;
}
