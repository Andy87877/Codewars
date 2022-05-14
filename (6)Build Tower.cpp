// https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/cpp
#include <string>
#include <vector>
using namespace std;

vector<string> towerBuilder(unsigned nFloors) {
  vector <string> ans;
  string temp;
  for (int i = 0; i < nFloors; i++) {
    temp = "";
    for (int j = 0; j < nFloors-i-1; j++) {
      temp += " ";
    }
    for (int j = 0; j < (i*2+1); j++) {
      temp += "*";
    }
    for (int j = 0; j < nFloors-i-1; j++) {
      temp += " ";
    }
    ans.push_back(temp);
  }
  return ans;
}
