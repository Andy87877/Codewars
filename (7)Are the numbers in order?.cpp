// https://www.codewars.com/kata/56b7f2f3f18876033f000307/train/cpp
#include <bits/stdc++.h>
using namespace std;

bool isAscOrder(vector<int> arr){
  vector<int> check = arr;
  sort(check.begin(), check.end());
  for (int i = 0; i < arr.size(); i++) {
    if (check[i] != arr[i]) {
      return false;
    }
  }
  return true;
}
