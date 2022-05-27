// https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08/train/cpp
#include <vector>
using namespace std;
vector<vector<int>> multiplication_table(int n){
  vector<vector<int>> ans;
  vector<int> temp;
  for (int i = 1; i <= n; i++) {
    temp.clear();
    for (int j = 1; j <= n; j++) {
      temp.push_back((i)*(j));
    }
    ans.push_back(temp);
  }
  return ans;
}
