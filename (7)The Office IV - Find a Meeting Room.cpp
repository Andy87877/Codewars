// https://www.codewars.com/kata/57f604a21bd4fe771b00009c/train/cpp
#include <bits/stdc++.h>
using namespace std;

int meeting(const vector<char>& rooms) {
  for (int i = 0; i < rooms.size(); i++) {
    if (rooms[i] == 'O') {
      return i;
    }
  }
  return -1;
}
