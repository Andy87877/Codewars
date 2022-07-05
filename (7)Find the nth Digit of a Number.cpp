// https://www.codewars.com/kata/577b9960df78c19bca00007e/train/cpp
#include <bits/stdc++.h>
using namespace std;

int findDigit(int num, int nth){
  cout << num << " " << nth << "\n";
  string str = to_string(num);
  if (nth <= 0) {
    return -1;
  }
  if (nth >= str.size()+1) {
    return 0;
  }
  
  if (str[str.size()-nth] == '-') {
    return 0;
  }
  
  return int(str[str.size()-nth])-48;
}
