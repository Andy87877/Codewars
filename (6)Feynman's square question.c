// https://www.codewars.com/kata/551186edce486caa61000f5c/train/c
unsigned long long count_squares(int n) {
  unsigned long long  i, total = 0;
  for (i = 1; i < n+1; i += 1) {
    total += i*i;
  }
  return total;
}
