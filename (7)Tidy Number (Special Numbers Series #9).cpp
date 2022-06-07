// https://www.codewars.com/kata/5a87449ab1710171300000fd/train/cpp
#include <string>
using namespace std; 

bool tidyNumber (int number){
  string numberstr;
  numberstr = to_string(number);
  for (int i = 0; i < numberstr.size()-1; i++) {
    if (numberstr[i] > numberstr[i+1]) {
      return false;
    }
  }
  return true;
}

