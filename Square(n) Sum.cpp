// https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp
#include <vector>
#define ll long long
int square_sum(const std::vector<int>& numbers){
  ll t = 0;
  for (int i: numbers) {
    t += i*i;
  }
  return t;
}
