// https://www.codewars.com/kata/59f08f89a5e129c543000069/train/cpp
#include <vector>
using namespace std;

vector<string> dup(vector<string> arr){    
  vector<string> ans;
  string temp;
  for (int i = 0; i < arr.size(); i++) {
    temp = "";
    for (auto j: arr[i]) {
      if (temp.size() == 0) {
        temp += j;
      } else if (temp[temp.size()-1] != j) {
        temp += j;
      }
    }
    ans.push_back(temp);
  }
  return ans;
}
