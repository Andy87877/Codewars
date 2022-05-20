// https://www.codewars.com/kata/5ce399e0047a45001c853c2b/train/cpp
#include <vector>
#define ll unsigned long long
using namespace std;
vector<ll> partsSum(const vector<ll>& ls){
  vector<ll> ans;
  ll total = 0;
  for (ll i = 0; i < ls.size(); i++) {
    total += ls[i];
  }
  ans.push_back(total);
  for (ll i = 0; i < ls.size(); i++) {
    ans.push_back(ans[ans.size()-1]-ls[i]);
  }
  
  return ans;
}
