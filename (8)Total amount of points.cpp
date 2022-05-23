// https://www.codewars.com/kata/5bb904724c47249b10000131/train/cpp
#include <string>
using namespace std;
int points(const array<string, 10>& games) {
  int total = 0;
  for (string i: games){
    if (int(i[0]) > int(i[2])){
      total += 3;
    } else if (int(i[0]) < int(i[2])){
      total += 0;
    } else {
      total++;
    }
  }
  return total;
}
