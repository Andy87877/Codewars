// https://www.codewars.com/kata/5629db57620258aa9d000014/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Mix
{
public:
  static string mix(const string &s1, const string &s2) {
    cout << s1 << "||||||||||||||||" << s2 << "\n";
    map<char, ll> ma1;
    map<char, ll> ma2;
    map<char, ll> ma3;
    vector<string> temp;
    
    for (auto i: s1) {
      if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
        ma1[i]++;
        ma3[i]++;
      }
    }
    for (auto i: s2) {
      if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
        ma2[i]++;
        ma3[i]++;
      }
    }

    for (auto i: ma3) {
      if ((ma1[i.first] >= 2) || (ma2[i.first] >= 2)) {
        string hiii;
        if(ma1[i.first] == ma2[i.first]) {
          hiii = "=:";
          for (ll j = 0; j < ma1[i.first]; j++) {
            hiii += i.first;
          }
        } else if (ma1[i.first] > ma2[i.first]) {
          hiii = "1:";
          for (ll j = 0; j < ma1[i.first]; j++) {
            hiii += i.first;
          }
        } else {
          hiii = "2:";
          for (ll j = 0; j < ma2[i.first]; j++) {
            hiii += i.first;
          }
        }
        temp.push_back(hiii);
      }
    }
    string ans = "";
    
    if (temp.size() >= 1) {
      for (unsigned long i = 0; i < temp.size(); i++) {
        for (unsigned long j = i+1; j < temp.size(); j++) {
          if (temp[i].size() < temp[j].size()) {
            swap(temp[i],temp[j]);
          } else if (temp[i].size() == temp[j].size()) {
            if (temp[i][0] > temp[j][0]) {
              swap(temp[i],temp[j]);
            } else if (temp[i][0] == temp[j][0]) {
              if (temp[i][2] > temp[j][2]) {
                cout << temp[i][2] << " " << temp[j][2] << "\n";
                swap(temp[i],temp[j]);
              }
            }
          }
        }
      }

      for (unsigned long i = 0; i < temp.size()-1; i++) {
        ans += temp[i];
        ans += "/";
      }
      ans += temp[temp.size()-1];
    }
    
    return ans;
  }; 
};
