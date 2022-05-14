// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/cpp
#include <string>
using namespace std;

bool solution(std::string const &str, std::string const &ending) {
    if (ending == ""){
      return true;
    }
    int temp = str.size()-ending.size();
    for (int i = 0; i < ending.size(); i++) {
      if (ending[i] != str[i+temp]) {
        return false;
      }
    }
    return true;
}
