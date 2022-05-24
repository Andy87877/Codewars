// https://www.codewars.com/kata/563b662a59afc2b5120000c6/train/cpp
class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p) {
    int ans = 0, total = p0;
    percent /= 100;
    while (total < p) {
      ans++;
      total = total + total*percent + aug;
    }
    return ans;
  };
};
