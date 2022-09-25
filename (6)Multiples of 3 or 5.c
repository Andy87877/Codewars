// https://www.codewars.com/kata/514b92a657cdc65150000006/train/c
#include <stdio.h>

int solution(int number) {
	int i, ans = 0;
  for (i = 3; i < number; i++) {
    if ((i%3 == 0) || (i%5 == 0)) {
      ans += i;
    }
  }  
  return ans;
}
