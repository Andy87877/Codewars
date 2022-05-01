// https://www.codewars.com/kata/55f2b110f61eb01779000053/train/cpp
#define ll long long
using namespace std;

ll get_sum(ll a, ll b) {
  if (a == b) {
    return a;
  } else {
    ll t = 0;
    ll temp;
    if (a > b) {
      temp = a;
      a = b;
      b = temp;
    }
    for (ll i = a; i < b+1; i++) {
      t += i;
    }
    return t;
  }
}
