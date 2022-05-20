// https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/cpp
#include <vector>
#include <cmath>
using namespace std;
int FindOutlier(vector<int> arr) {
  if (((abs(arr[0]%2)) != (abs(arr[1]%2))) && ((abs(arr[0])%2) != (abs(arr[2])%2))) {
    return arr[0];
  }
  for (int i = 0; i < arr.size()-1; i++) {
    if ((abs(arr[i])%2) != (abs(arr[i+1])%2)) {
      return arr[i+1];
    }
  }
}
