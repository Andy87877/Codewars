// https://www.codewars.com/kata/59377c53e66267c8f6000027/train/cpp
#include <string>
#include <map>
using namespace std;

string alphabetWar(string fight) {
  map<char, int> judge = {
    {'w', 4},
    {'p', 3},
    {'b', 2},
    {'s', 1},
    {'m', -4},
    {'q', -3},
    {'d', -2},
    {'z', -1}
  };
  int total = 0;
  
  for (char i: fight) {
    for (auto j: judge) {
      if (i == j.first) {
        total += j.second;
      }
    }
  }
  
  if (total == 0) {
    return "Let's fight again!";
  } else if (total > 0) {
    return "Left side wins!";
  } else {
    return "Right side wins!";
  }
}
