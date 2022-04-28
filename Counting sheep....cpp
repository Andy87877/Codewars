// https://www.codewars.com/kata/54edbc7200b811e956000556/train/cpp
#include <vector>
using namespace std; 

int count_sheep(vector<bool> arr) {
  int total = 0;
  for (auto i: arr) {
    if (i) {
      total++;
    }
  }
  return total;
}

