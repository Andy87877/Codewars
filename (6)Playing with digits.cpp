// https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class DigPow {
public:
  static int digPow(int n, int p) {
    string str = to_string(n);
    ll num = 0, k;
    for (ll i = 0; i < str.size(); i++) {
      num += pow(int(str[i])-48,i+p);
    }
    k = num / n;
    if (num == k*n) {
      return k;
    }
    
    return -1;
  }; 
};
