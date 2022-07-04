// https://www.codewars.com/kata/5738f5ea9545204cec000155/train/cpp
#include <string>
using namespace std;

int countLettersAndDigits(string input){
  int total = 0;
  for (auto i: input) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      total++;
    } else if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      total++; 
    } else if ((int(i) >= int('0')) && (int(i) <= int('9'))) {
      total++;
    }
  }
  return total;
}
