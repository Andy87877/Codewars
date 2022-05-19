// https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c/train/cpp
#include <vector>
using namespace std;
vector<int> evenNumbers(vector<int> arr, int n) {
  vector<int> vec;

  for (int i = arr.size()-1; i >= 0; i--) {
    if (!n){
      break;
    }
    if (!(arr[i]%2)) {
      vec.push_back(arr[i]);
      n--;    
    }
  }
  
  vector<int> ans;
  for (int i = vec.size()-1; i >= 0; i--) {
    ans.push_back(vec[i]);
  }
  return ans;
}
