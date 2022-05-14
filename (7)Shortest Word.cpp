// https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp
#include <string>
#define ll long long
using namespace std;

int find_short(string str) {
  ll min = str.size(), temp = 0;
  
  for(auto i: str) {
    if (i == ' ') {
      if (min > temp) {
        min = temp;
      }
      temp = -1;
    }
    temp++;
  }
  if (min > temp) {
    min = temp;
  }
  
  return min;
}
