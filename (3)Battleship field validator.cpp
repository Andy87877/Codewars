// https://www.codewars.com/kata/52bb6539a4cf1b12d90005b7/train/cpp
#include <vector>
using namespace std;

bool validate_battlefield(vector<vector<int>> a) {
  int judge[4] = {0,0,0,0}; // true 4 3 2 1
  int field[12][12];
  
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      if ((i == 0) || (j == 0) || (i == 11) || (j == 11)) {
        field[i][j] = 0;
      } else {
        field[i][j] = a[i-1][j-1];
      }
    }
  }
  
  for (int i = 1; i < 11; i++) {
    for (int j = 1; j < 11; j++) {
      if (field[i][j] == 1) {
        field[i][j] = 2;
        if ((field[i+1][j+1] == 0) && (field[i+1][j] == 0) && (field[i+1][j-1] == 0) && (field[i][j+1] == 0) && (field[i][j-1] == 0) && (field[i-1][j+1] == 0) && (field[i-1][j] == 0) && (field[i-1][j-1] == 0)) {
          judge[0]++;
        } else if (!(field[i-1][j] != 0) && !(field[i][j-1] != 0) && !(field[i-1][j-1] != 0) && !(field[i+1][j-1] != 0)){
          bool flag = true;
          
          if ((field[i+1][j] != 0) && (field[i][j+1] != 0)) {
            flag = false;
          }
          
          // right
          int tempi = i, tempj = j+1, temp = 0;
          while (field[tempi][tempj] != 0) {
            field[tempi][tempj] = 2;
            if ((field[tempi+1][tempj] != 0) || (field[tempi-1][tempj] != 0)) {
              flag = false;
            }
            tempj++;
            temp++;
          }
          
          // down
          tempi = i+1;
          tempj = j;
          
          while (field[tempi][tempj] != 0) {
            field[tempi][tempj] = 3;
            if ((field[tempi][tempj+1] != 0) || (field[tempi][tempj-1] != 0)) {
              flag = false;
            }
            tempi++;
            temp++;
          }
          
          if ((flag) && (temp <= 3)) {
            judge[temp]++;
          }
        }
      }
      cout << field[i][j] << " ";
    }
    cout << endl;
  }
  
  bool flag = true;
  for (int i = 0; i < 4; i++) {
    cout << judge[i] << " ";
    if (judge[i] != 4-i) {
      flag = false;
    }
  }
  cout << endl;
  
  return flag;
}
/*
0 = nothing 
1 = no judge
other = judge

right
down
*/
