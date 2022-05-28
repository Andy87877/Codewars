// https://www.codewars.com/kata/57ed30dde7728215300005fa/train/cpp
#include <string>
using namespace std;
string bumps(string road){
  long long ans = 0;
  for (auto i: road) {
    if (i == 'n') {
      ans++;
    }
    if (ans > 15) {
      return "Car Dead";
    }
  }
  return "Woohoo!";
}
