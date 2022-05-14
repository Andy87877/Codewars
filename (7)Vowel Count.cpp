// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp
#include <string>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  
  for (auto i: inputStr) {
    if ((i == 'a') || (i == 'e') || (i == 'i') || (i == 'o') || (i == 'u')) {
      num_vowels++;
    }
  }
  return num_vowels;
}
