// https://www.codewars.com/kata/5592e3bd57b64d00f3000047/train/cpp
#include <cmath>
#define ll unsigned long long
using namespace std;
class ASum
{
  public:
  static ll findNb(ll m){
    ll temp = 0, judge = 1;
    while (temp < m){
      temp += judge*judge*judge;
      judge++;
    }
    cout << m << " " << temp << " " << judge << endl;
    if (temp == m) {
      return judge-1;
    } else {
      return -1;
    }
  };
};
