// https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/cpp
#include <vector>
using namespace std; 

int findSmallest(vector <int> list) {
  int min = list[0];
  for (int i: list) {
    if (i < min) {
      min = i;
    }
  }
  return min;
}
