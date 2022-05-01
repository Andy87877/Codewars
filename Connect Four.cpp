// https://www.codewars.com/kata/56882731514ec3ec3d000009/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#define ll long long
using namespace std;
stringstream ss;

char table[6][7];

void Display() {
  for (int y = 0; y < 6; y++) {
    cout << y << ' ';
    for (int x = 0; x < 7; x++) {
      cout << table[y][x] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

string judge() {
  for (int y = 5; y >= 0; y--) {
    for (int x = 0; x < 7; x++) {
      if ((table[y][x] == 'Y') && (y >= 3)) { //直
        if ((table[y-1][x] == 'Y') && (table[y-2][x] == 'Y') && (table[y-3][x] == 'Y')) {
          return "Yellow";
        }
      }
      if ((table[y][x] == 'Y') && (x <= 3)) {//橫
        if ((table[y][x+1] == 'Y') && (table[y][x+2] == 'Y') && (table[y][x+3] == 'Y')) {
          return "Yellow";
        }
      }
      if ((table[y][x] == 'Y') && (y >= 3) && (x <= 3)) {//斜
        if ((table[y-1][x+1] == 'Y') && (table[y-2][x+2] == 'Y') && (table[y-3][x+3] == 'Y')) {
          return "Yellow";
        }
      }
      if ((table[y][x] == 'Y') && (y >= 3) && (x >= 3)) {//斜
        if ((table[y-1][x-1] == 'Y') && (table[y-2][x-2] == 'Y') && (table[y-3][x-3] == 'Y')) {
          return "Yellow";
        }
      }
      if ((table[y][x] == 'R') && (y >= 3)) {
        if ((table[y-1][x] == 'R') && (table[y-2][x] == 'R') && (table[y-3][x] == 'R')) {
          return "Red";
        }
      }
      if ((table[y][x] == 'R') && (x <= 3)) {
        if ((table[y][x+1] == 'R') && (table[y][x+2] == 'R') && (table[y][x+3] == 'R')) {
          return "Red";
        }
      }
      if ((table[y][x] == 'R') && (y >= 3) && (x <= 3)) {
        if ((table[y-1][x+1] == 'R') && (table[y-2][x+2] == 'R') && (table[y-3][x+3] == 'R')) {
          return "Red";
        }
      }
      if ((table[y][x] == 'R') && (y >= 3) && (x >= 3)) {//斜
        if ((table[y-1][x-1] == 'R') && (table[y-2][x-2] == 'R') && (table[y-3][x-3] == 'R')) {
          return "Red";
        }
      }
    }
  }
  return "false";
}

void Put_Yellow(int position) {
  for (int y = 0; y < 5; y++) {
    if (table[y+1][position] != 'N') {
      table[y][position] = 'Y';
      break;
    } else if (y == 4) {
      table[5][position] = 'Y';
    }
  }
}

void Put_Red(int position) {
  for (int y = 0; y < 5; y++) {
    if (table[y+1][position] != 'N') {
      table[y][position] = 'R';
      break;
    } else if (y == 4) {
      table[5][position] = 'R';
    }
  }
}

string who_is_winner(vector<string> pieces_position_list) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      table[i][j] = 'N';
    }
  } 
  
  string s, ans;
  int intpos, len = pieces_position_list.size();
  for (int i = 0; i < len; i++) {
    s = pieces_position_list[i];
    intpos = int(s[0])-int('A');
    if (s[2] == 'Y') {
      Put_Yellow(intpos);
    } else {
      Put_Red(intpos);
    }
    cout << intpos << s[2] << endl;
    Display();
    
    ans = judge();
    if (ans != "false") {
      cout << ans << endl;
      return ans;
    }
    
  }
  return "Draw";
}
