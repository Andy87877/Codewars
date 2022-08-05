// https://www.codewars.com/kata/55c9172ee4bb15af9000005d/train/cpp
#include <bits/stdc++.h>
using namespace std;

long countOddPentaFib(long n){
  cout << n << "\n";
  long ans = 1;
  vector<long long> vec(n+1);
  vec[0] = 0;
  vec[1] = 1;
  vec[2] = 1;
  vec[3] = 2;
  vec[4] = 4;
  for (int i = 5; i <= n; i++) {
    vec[i] = vec[i-5]+vec[i-4]+vec[i-3]+vec[i-2]+vec[i-1];
    if (vec[i]%2) {
      ans++;
    }
  }
  return ans;
}
