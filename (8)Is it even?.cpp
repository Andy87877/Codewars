// https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/cpp
using namespace std;
bool is_even(double n){
  cout << n << "\n";
  long long ans = n;
  if(ans != n) {
    return false;
  }
  return ((ans%2) == 0);
}
