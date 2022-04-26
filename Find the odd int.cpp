// https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp
#include <vector>
#include <map>
using namespace std;

int findOdd(const std::vector<int>& numbers){
  map<int,int> ans;
  for(auto i: numbers){
    ans[i]++;
  }
  for(auto i: ans){
    if((i.second % 2) == 1) {
      return i.first;
    }
  }
}
