// https://www.codewars.com/kata/5511b2f550906349a70004e1/train/cpp
#include <bits/stdc++.h>
using namespace std;

int last_digit(const string &str1, const string &str2) {
  cout << str1 << " " << str2 << "\n";
  int n1 = str1[str1.size()-1]-int('0');
  int n2 = str2[str2.size()-1]-int('0');
  
  if (str2 == "0") {
    return 1;
  }
  
  if (n1 == 4 || n1 == 9) {
    n2 %= 2;
    return int(pow(n1,n2+2))%10;
  } else if (n1 == 2 || n1 == 3 || n1 == 7 || n1 == 8) {
    if (str2.size() >= 2) {
      n2 += 10*(str2[str2.size()-2]-int('0'));
    }
    n2%=4;
    
    return int(pow(n1,n2+4))%10;
  }
  return n1;
}
