// https://www.codewars.com/kata/5a53a17bfd56cb9c14000003/train/cpp
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 

string disariumNumber (int number) {
  string str = to_string(number);
  int ans = 0;  
  for (ll i = 1; i <= str.size(); i++) {
    ans += pow((int(str[i-1])-48),i);
  }
  if (ans == number) {
    return "Disarium !!";
  } else {
    return "Not !!";
  }
}
