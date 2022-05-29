// https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/cpp
#include <cmath>
using namespace std;

int divisors(int n){ 
  int total = 0;
  cout << n << endl;
  
  for (int i = 1; i <= n; i++) {
    if ((n % i) == 0) {
      total++;
    }
  }
  return total;
}
