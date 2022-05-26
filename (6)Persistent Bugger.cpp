// https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/cpp
#include <string>
using namespace std;

int persistence(long long n){
  long long temp, total = 0;
  string str;
  
  while (n > 9){
    temp = 1;
    str = to_string(n);
    for (char i: str){
      temp *= (int(i)-int('0'));
    }
    n = temp;
    cout << n << endl;
    total++;
  }
  return total;
}
