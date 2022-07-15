// https://www.codewars.com/kata/5a4d303f880385399b000001/train/cpp
#include <bits/stdc++.h>
using namespace std; 

string strong_num (int number){
  int ans = 0, temp = number;
  while (temp > 0) {
    int t = temp%10, test = 1;
    for (int i = 1; i <= t; i++) {
      test*=i;
    }
    ans += test;
    temp /= 10;
  }
  if (ans == number) {
    return "STRONG!!!!";
  } else {
    return "Not Strong !!";
  }
}
