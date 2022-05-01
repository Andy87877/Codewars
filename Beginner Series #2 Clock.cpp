// https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a/train/cpp
using namespace std;
int past(int h, int m, int s) {
  return 1000*(s+m*60+h*3600);
}
