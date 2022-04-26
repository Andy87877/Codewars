// https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
#include <string>
using namespace std;

std::string get_middle(std::string input) {
  int s = input.size();
  string ans = "";
  
  if ((s % 2) == 0) {
    ans += input[(s/2)-1];
    ans += input[(s/2)];
  } else {
    ans = input[s/2];
  }
  return ans;
}
