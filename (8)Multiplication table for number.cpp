// https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp
#include <string>
using namespace std;
string multi_table(int number){
  string ans = "";
  for (int i = 1; i <= 10; i++) {
    ans += to_string(i);
    ans += " * ";
    ans += to_string(number);
    ans += " = ";
    ans += to_string(i*number);
    if (i != 10){
      ans += "\n";
    }
  }
  return ans;
}
