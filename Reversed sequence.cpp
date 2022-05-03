// https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/cpp
#include <vector>
using namespace std;

vector<int> reverseSeq(int n) {
  vector<int> a;
  for (int i = n; i > 0; i--) {
    a.push_back(i);
  }
  return a;
}
