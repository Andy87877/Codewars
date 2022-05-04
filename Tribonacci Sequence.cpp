// https://www.codewars.com/kata/556deca17c58da83c00002db/train/cpp
#include <vector>
using namespace std;

vector<int> tribonacci(vector<int> signature, int n) {
    vector<int> v;
    v = signature;
    
    if (n <= 2) {
      for (int i = 3; i > n; i--) {
        v.pop_back();
      }
    }
  
    for (int i = 3; i < n; i++) {
      v.push_back(v[i-3]+v[i-2]+v[i-1]);
    }
    return v;
}
