// https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp
#include <map>
using namespace std;
int stray(vector<int> numbers) {
  map<int,int> m;
  for (int i: numbers) {
    cout << i << " ";
    m[i]++;
  }
  
  for (auto i: m) {
    if (i.second == 1) {
      return i.first;
    }
  }
  
  return 1;
};
