// https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/train/cpp
#include <bits/stdc++.h>
#define ll long
using namespace std;

ll zeros(ll n) {
  ll total = 0;
  cout << n << "\n";
  
//   total = (n/5)+(n/25)...
  for (int i = 1; i < 100; i++) {
    total += (n/pow(5,i));
  }
  return total;
}
