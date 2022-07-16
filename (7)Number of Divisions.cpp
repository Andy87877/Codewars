// https://www.codewars.com/kata/5913152be0b295cf99000001/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int divisions(const int& n, const int& divisor) {
  ll ans = 0, num = n;
  cout << num << " " << divisor << "\n";
  if (divisor == 1) {
    return -2147483648;
  }
    
    
  while (num >= divisor) {
    num /= divisor;
    ans++;
    cout << num << " ";
  }
  cout << "\n";
  return ans;
}
