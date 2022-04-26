// https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp
#include <cmath> 
bool narcissistic( int value ){
  int total = 0, ans = value, times = 0;
  while(value > 0) {
    times++;
    value /= 10;
  }
  
  value = ans;
  while(value > 0) {
    total += pow((value%10),times);
    value /= 10;
  }
  
  if (total == ans) {
    return true;
  } else {
    return false;
  }
}
