// https://www.codewars.com/kata/559a28007caad2ac4e000083/train/cpp
typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(ull n) {
    ull ans = 4;
    ull l[3] = {1,1,2};
    for (int i = 3; i <= n; i++) {
      l[0] = l[1];
      l[1] = l[2];
      l[2] = l[0] + l[1];
      ans += l[2];
    }
    return ans*4;
  };
};
