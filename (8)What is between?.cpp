// https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/cpp
#include <vector>
using namespace std;

vector<int> between(int start, int end) {
  vector<int> ans;
  for (int i = start; i <= end; i++) {
    ans.push_back(i);
  }
  return ans;
}  
