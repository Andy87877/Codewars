// https://www.codewars.com/kata/511f11d355fe575d2c000001/train/cpp
#include <vector>
#include <array>
using namespace std;
array<int, 2> two_oldest_ages(vector<int> ages){
  sort(ages.begin(), ages.end());
  return {ages[ages.size()-2],ages[ages.size()-1]};
}
