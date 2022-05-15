// https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/cpp
#include<vector>
using namespace std;

int sum(vector<int> numbers) {
  if (numbers.size() <= 1) {
    return 0;
  }
  
  int total = 0, min = numbers[0], max = numbers[0]; 
  for (auto i: numbers) {
    total += i;
    if (max < i) {
      max = i;
    }
    if (min > i) {
      min = i;
    }
  }
  total -= (max+min);
  return total;
}
