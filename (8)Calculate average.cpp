// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/cpp
#include <vector>
using namespace std;

double calcAverage(const vector<int>& values){
  double total = 0;
  for (auto i: values) {
    total += i;
  }
  double ans;
  ans = total / values.size();
  return ans;
}
