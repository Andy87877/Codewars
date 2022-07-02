// https://www.codewars.com/kata/536a155256eb459b8700077e/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> create_spiral(int n){  
  cout << n << "\n";
  if (n < 1) {
    return {};
  }
  
  ll arr[n][n];
  ll nowi = 0, nowj = 0, mini = 0, minj = 1, maxi = n-1, maxj = n-1;
  ll nowturn = 0; // 0r 1d 2l 3u
  
  for (ll i = 1; i <= n*n; i++) {
    arr[nowj][nowi] = i;
    if (nowturn == 0) {
      nowi++;
      if (nowi == maxi) {
        nowi = maxi;
        maxi--;
        nowturn = 1;
      }
    } else if (nowturn == 1) {
      nowj++;
      if (nowj == maxj) {
        nowj = maxj;
        maxj--;
        nowturn = 2;
      }
    } else if (nowturn == 2) {
      nowi--;
      if (nowi == mini) {
        nowi = mini;
        mini++;
        nowturn = 3;
      }
    } else {
      nowj--;
      if (nowj == minj) {
        nowj = minj;
        minj++;
        nowturn = 0;
      }
    }
  }  
  
  vector<int> temp;
  vector<vector<int>> ans;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
      temp.push_back(arr[i][j]);
    }
    ans.push_back(temp);
    temp.clear();
    cout << "\n";
  }
  cout << "----------------------------------------\n";
  return ans;
}
