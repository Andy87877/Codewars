//https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp
#include <vector>
using namespace std;
std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  if (humanYears == 1) {
    return {1, 15, 15};
  } else if (humanYears == 2) {
    return {2, 24, 24};
  } else {
    return {humanYears,24+(humanYears-2)*4,24+(humanYears-2)*5};
  }
}
