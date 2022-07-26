// https://www.codewars.com/kata/628e3ee2e1daf90030239e8a/train/cpp
using namespace std;
bool interlockable(unsigned long long a, unsigned long long b) {
  if (a < b) {
    swap(a,b);
  }
  cout << a << " " << b << "\n";
  while (b != 0) {
    if (a & b) {
      return false;
    }
    a = a >> 1;
    b = b >> 1;
    cout << a << " " << b << "\n";
  }
  return true;
}
