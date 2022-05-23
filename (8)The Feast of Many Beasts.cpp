// https://www.codewars.com/kata/5aa736a455f906981800360d/train/cpp
#include <string>
using namespace std;
bool feast(string beast, string dish){
  if ((beast[0] == dish[0]) && (beast[beast.size()-1] == dish[dish.size()-1])) {
    return true;
  } else {
    return false;
  }
}
