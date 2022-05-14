// https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/cpp
#include <vector>
using namespace std;
std::vector<int> countPositivesSumNegatives(std::vector<int> input){
    if (input.size() == 0) {
      return {};
    }
    int a = 0, b = 0;
    for (auto i: input) {
      if (i > 0) {
        a++;
      } else {
        b += i;
      }
    }
    return {a,b};
}
