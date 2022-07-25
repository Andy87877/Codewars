// https://www.codewars.com/kata/54d512e62a5e54c96200019e/train/cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

class PrimeDecomp
{
public:
    static string factors(int lst) {
      map<ll,ll> ma;
      for (ll i = 2; i <= lst; i++) {
        while (lst%i == 0) {
          lst /= i;
          ma[i]++;
        }
        if (lst == 1) {
          break;
        }
      }
      
      string ans = "";
      for (auto i: ma) {
        ans += "(";
        ans += to_string(i.first);
        if (i.second != 1) {
          ans += "**";
          ans += to_string(i.second);
        }
        ans += ")";
      }
      
      return ans;
    };
};
