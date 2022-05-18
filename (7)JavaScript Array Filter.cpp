// https://www.codewars.com/kata/514a6336889283a3d2000001/train/cpp
#include <vector>
using namespace std;

vector<int> get_even_numbers(const vector<int>& arr) {
  vector<int> ans;
  for (int i: arr) {
    if (!(i%2)){
      ans.push_back(i);
    }
  }
  return ans;
}
