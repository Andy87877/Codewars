// https://www.codewars.com/kata/54c27a33fb7da0db0100040e/train/cpp
#include <cmath>
using namespace std;
bool is_square(long long n) {
  if(pow(float(pow(n,0.5)),2) == n) {
    return true;
  } else {
    return false;
  }
}