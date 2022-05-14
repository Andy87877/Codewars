// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
int digital_root(int n) {
    int total;
    while (n >= 10) {
      total = 0;
      while (n > 0) {
        total += n%10;
        n/=10;
      }
      n = total;
    }
  return n;
}
