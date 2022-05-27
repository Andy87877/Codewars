// https://www.codewars.com/kata/555eded1ad94b00403000071/train/cpp
#include <string>
#define ld long double
#define ll long long
using namespace std;

string seriesSum(int n) {
  if (n == 0) {
    return "0.00";
  } else if (n == 1) {
    return "1.00";
  } else if (n == 2) {
    return "1.25";
  }
  
  ld ans = 125;
  for (ld i = 7; i < 7+(n-2)*3; i += 3) {
    ans += (100/i);
  }
  
  
  string str,strans = "";
  str = to_string(ans);
  if (int(str[4]) >= int('5')) {
    ans++;
  }
  str = to_string(ans);
  strans += str[0];
  strans += "." ;
  strans += str[1];
  strans += str[2];
  return strans;
}
