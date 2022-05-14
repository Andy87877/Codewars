// https://www.codewars.com/kata/54da539698b8a2ad76000228/train/cpp
#include<vector>
using namespace std;

bool isValidWalk(std::vector<char> walk) {
  if (walk.size() != 10) {
    return false;
  }
  
  int ns = 0, ew = 0;
  
  for (auto i: walk) {
    if (i == 'n') {
      ns++;
    } else if (i == 's'){
      ns--;
    } else if (i == 'e') {
      ew++;
    } else {
      ew--;
    }
  }
  
  if ((ns == 0) && (ew == 0)) {
    return true;
  } else {
    return false;
  }
}
