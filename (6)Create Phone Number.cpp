// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp
#include <string>
#include <sstream>
using namespace std;

std::string createPhoneNumber(const int arr [10]){
  stringstream ss;
  string ans;
  
  for (int i = 0; i < 10; i++) {
    if (i == 0) {
      ans += "(";
    } else if (i == 3) {
      ans += ") ";
    } else if (i == 6) {
      ans += "-";
    }
    ans += (arr[i]+'0');
  }
  return ans;
}
