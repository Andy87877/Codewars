// https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp
namespace Triangle
{
  bool isTriangle(long long a, long long b, long long c)
  {
    if ((a+b <= c) || (a+c <= b) || (c+b <= a)) {
      return false;
    } else if (a*b*c == 0){
      return false;
    } else {
      return true;
    }
  }
};
