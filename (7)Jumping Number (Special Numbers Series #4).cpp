// https://www.codewars.com/kata/5a54e796b3bfa8932c0000ed/train/cpp
#include <bits/stdc++.h>
using namespace std; 

string jumpingNumber (int number){
  string str = to_string(number);
  cout << str << "\n";
  for (int i = 0; i < str.size()-1; i++) {
    if (abs(int(str[i])-int(str[i+1])) != 1) {
      return "Not!!";
    }
  }
  return "Jumping!!";
}
