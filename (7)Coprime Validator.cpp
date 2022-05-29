// https://www.codewars.com/kata/585c50e75d0930e6a7000336/train/cpp
using namespace std;
bool are_coprime(unsigned int a, unsigned int b) {
  cout << a << " " << b;
  for (int i = 2; i <= min(a,b); i++) {
    if (((a % i) == 0) && ((b % i) == 0)) {
      return false;
    }
  }
  return true;
}
