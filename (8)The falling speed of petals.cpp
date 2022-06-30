// https://www.codewars.com/kata/5a0be7ea8ba914fc9c00006b/train/cpp
using namespace std;
double SakuraFall(double v) {
  cout << v << "\n";
  if (!v) return 0;
  return (400/v)*(v > 0);
}
