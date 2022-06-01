// https://www.codewars.com/kata/57ee24e17b45eff6d6000164/train/cpp
#include <string>
using namespace std;

string cat_mouse(string x) {
  int d = 0;
  bool flag = false;
  
  cout << x << endl;
  
  for (auto i: x) {
    if (flag) {
      d++;
    }
    if ((i == 'C') || (i == 'm')) {
      if (flag) {
        if (d > 4) {
          return "Escaped!";
        } else {
          return "Caught!";
        }
      } else {
        flag = true;
      }
    }
  }
}
