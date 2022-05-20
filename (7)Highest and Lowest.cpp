// https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

string highAndLow(const string& numbers){
  stringstream ss;
  ss << numbers;
  
  int temp;
  vector<int> ans;
  
  while (ss >> temp) {
    ans.push_back(temp);
  }
  sort(ans.begin(),ans.end());
  
  return to_string(ans[ans.size()-1]) + " " + to_string(ans[0]);
}
