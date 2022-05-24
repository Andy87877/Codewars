// https://www.codewars.com/kata/57f5e7bd60d0a0cfd900032d/train/cpp
#include <vector>
#include <algorithm>
using namespace std;

int missingNo(vector<int> arr){
  sort(arr.begin(), arr.end());
  for (int i = 0; i <= 100; i++) {
    if (arr[i] != i) {
      return i;
    }
  }
}
