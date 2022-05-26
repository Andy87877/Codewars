// https://www.codewars.com/kata/580878d5d27b84b64c000b51/train/cpp
int sumTriangularNumbers(int n) {
  if (n <= 0) {
    return 0;
  }
  long long ans = 1, temp = 1;
  for (int i = 2; i <= n; i++) {
    temp += i;
    ans += temp;
  }
  return ans;
}
