// https://www.codewars.com/kata/5a662a02e626c54e87000123/train/cpp
#include <vector>
using namespace std; 

vector <int> extraPerfect (int number) {
  vector<int> ans;
  for (int i = 1; i <= number; i+=2) {
    ans.push_back(i);
  }
  return ans;
}
