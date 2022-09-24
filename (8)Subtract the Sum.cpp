// https://www.codewars.com/kata/56c5847f27be2c3db20009c3/train/cpp
#include <bits/stdc++.h>
using namespace std;

string str_arr[10] = {"kiwi","pear","banana","melon","pineapple","apple","cucumber","orange","grape","cherry"};
int num_arr[101] = {0,0,1,0,2,3,2,3,4,5,4,6,4,6,7,8,7,8,5,8,9,1,9,1,0,2,0,5,3,2,3,4,3,4,6,7,5,7,8,7,8,9,1,9,1,5,1,0,2,0,2,3,4,3,5,6,4,6,7,6,7,8,9,5,9,1,9,1,0,1,0,2,5,2,3,4,3,4,6,4,6,5,8,7,8,9,8,9,1,9,5,0,2,0,2,3,2,3,4,5,4};

string SubtractSum(int n){
//   cout << n << "\n";
  
  string str = to_string(n);
  int sum = 0;
  for (auto i: str) {
    sum += (int(i)-48);
  }
  n -= sum;
  
  while (n > 100) {
    str = to_string(n);
    sum = 0;
    for (auto i: str) {
      sum += (int(i)-48);
    }
    n -= sum;
  }
  return str_arr[num_arr[n]];
}
