// https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp
#include <vector>
using namespace std;

int positive_sum (const vector<int> arr){
  int total = 0;
  for (int i: arr) {
    if (i >= 0) {
      total += i;
    }
  }
  return total;
}
