// https://www.codewars.com/kata/5951d30ce99cf2467e000013/train/cpp
using namespace std;
bool PythagoreanTriple(const int a, const int b, const int c){
  if (a*b*c == 0) {
    return false;
  }
  if (a*a+b*b==c*c) {
    return true;
  }
  if (a*a+c*c==b*b) {
    return true;
  }
  if (c*c+b*b==a*a) {
    return true;
  }
  return false;
}
