// https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/cpp
#include <vector>
#define ll long long
using namespace std;

int maxSequence(const std::vector<int>& arr){
  ll len = arr.size();
  
  if (len == 0) {
    return 0;
  }
  
  ll num, max = arr[0];
  for (ll i = 0; i < len; i++) {
    num = 0;
    for (ll j = i; j < len; j++) {
      num += arr[j];
      if (num >= max) {
        max = num;
      }
    }
  }
  if (max <= 0) {
    return 0;
  }
  return max;
}
