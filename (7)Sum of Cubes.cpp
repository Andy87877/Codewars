// https://www.codewars.com/kata/59a8570b570190d313000037/train/cpp
unsigned int sum_cubes(unsigned int n) {
  unsigned long long ans = 0;
  for (unsigned long long i = 1; i <= n; i++) {
    ans += i*i*i;
  }
  return ans;
}
