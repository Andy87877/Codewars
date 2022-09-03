// https://www.codewars.com/kata/5813d19765d81c592200001a/train/cpp
#include <bits/stdc++.h>
using namespace std;

int dontGiveMeFive(int start, int end) {
  int ans = 0;
  string temp = to_string(start);
  string temp1 = "";
  cout << start << " " << end << "\n";
  
  bool flag = true, flag2 = false;
  if (start <= 0) {
    flag2 = true;
  }
  for (int i = 0; i <= temp.size(); i++) {
    if (flag){
      if (temp[i] == '5') {
        if (flag2) {
          temp1 += "4";
        } else {
          temp1 += "6";
        }
        flag = false;
      } else {
        temp1 += temp[i];
      }
    } else {
      temp1 += "0";
    }
    cout << temp1 << "  ";
  } 
  if (!flag) {
    temp1.pop_back();
  }
  start = stoi(temp1);
  
  for (int i = start; i <= end; i++) {
    bool check = true;
    temp = to_string(i);
    for (int j = 0; j <= temp.size(); j++) {
      if (temp[j] == '5') {
        check = false;
        i += pow(10,(temp.size()-j-1))-1;
        break;
      }
    }
    if (check) {
      cout << i << " ";
      ans++;
    }
  }
  cout << "\n\n\n";
  return ans;
}
