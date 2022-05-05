// https://www.codewars.com/kata/5648b12ce68d9daa6b000099/train/cpp
#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  long long total = 0;
  for (auto i: busStops){
    total += i.first;
    total -= i.second;
  }
  return total;
}
