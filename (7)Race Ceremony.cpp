// https://www.codewars.com/kata/62cecd4e5487c10028996e04/train/cpp
#include <bits/stdc++.h>
using namespace std;

tuple<int, int, int> racePodium(int blocks) {  
  if (blocks%3 == 0) {
    return make_tuple(blocks/3,blocks/3+1,blocks/3-1);
  } else if (blocks%3 == 1) {
    if (blocks == 7) {
      return make_tuple(2,4,1);
    }
    return make_tuple(blocks/3+1,blocks/3+2,blocks/3-2);
  }
  return make_tuple(blocks/3+1,blocks/3+2,blocks/3-1);
}
