// https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/cpp
#define ll long long
ll factorial(ll n){
  ll ans = 1;
  for (ll i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}
