// https://www.codewars.com/kata/5748838ce2fab90b86001b1a/train/cpp
#include <cmath>
using namespace std;
double square_area(double A) {
  double r, ans;
  r = 2/M_PI*A;
  ans = r*r;
  
  
  
  
  
  int intnum;
  intnum = ans*1000;
  if (intnum % 10 >= 5) {
    intnum += 10;
  }
  intnum /= 10;
  ans = intnum;
  ans /= 100;
  
  return ans;
};
// A = r*pi/2
