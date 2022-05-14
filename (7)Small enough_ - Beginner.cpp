// https://www.codewars.com/kata/57cc981a58da9e302a000214/train/cpp
#include <vector>
using namespace std;
bool small_enough(vector<int> arr, int limit) {
  for (int i: arr) {
    if (i > limit) {
      return false;
    }
  }
  return true;
}
