// https://www.codewars.com/kata/56f6919a6b88de18ff000b36/train/cpp
#include <vector>
#include <string>
using namespace std;

string howManyDalmatians(int number){
  vector<string> dogs = { "Hardly any", "More than a handful!", "Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
  if (number <= 10) {
    return dogs[0];
  } else if(number <= 50) {
    return dogs[1];
  } else if (number == 101) {
    return dogs[3];
  } else {
    return dogs[2];
  }
}
