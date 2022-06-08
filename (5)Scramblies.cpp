// https://www.codewars.com/kata/55c04b4cc56a697bb0000048/train/cpp
#include <string>
#include <map>
using namespace std;
bool scramble(const string& s1, const string& s2){
  map<char,int> m1, m2;
  for (auto i: s1) {
    m1[i]++;
  }
  for (auto i: s2) {
    m2[i]++;
  }
  if (m2.size() > m1.size()) {
    return false;
  }
  
  for (auto i: m2) {
    if(i.second > m1[i.first]) {
      return false;
    }
  }
  return true;
}
