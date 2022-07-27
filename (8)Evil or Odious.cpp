// https://www.codewars.com/kata/56fcfad9c7e1fa2472000034/train/cpp
#include <bits/stdc++.h>
using namespace std;

string evil(int n){
  int total = 0;
  while (n != 0) {
    if (n%2) {
      total++;
    }
    n = n >> 1;
  }
  if (total%2) {
    return "It's Odious!";
  } else {
    return "It's Evil!";
  }
}
