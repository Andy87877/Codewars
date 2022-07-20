// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/cpp
#include <bits/stdc++.h>
using namespace std;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c){
  cout << a << " " << b << " " << c << "\n";
  if (a != 1 && b != 1 && c != 1) {
    return a*b*c;
  }
  if (b == 1) {
    if ((c == 1) && (a == 1)) {
      return 3;
    }
    if (a == 1) {
      return 2*c;
    } else if (c == 1) {
      return a*2;
    }
    if (a < c) {
      return (a+1)*c;
    }
    return a*(1+c);
  } else if (a == 1) {
    if (c == 1) {
      return a+b+c;
    }
    return (1+b)*c;
  } else {
    return a*(b+1);
  }
}
