// https://www.codewars.com/kata/5865918c6b569962950002a1/train/cpp
#include <string>
using namespace std;

unsigned int strCount(string word, char letter){
  int total = 0;
  for (char i: word) {
    if (i == letter) {
      total++;
    }
  }
  return total;
}
