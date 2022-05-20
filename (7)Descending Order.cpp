// https://www.codewars.com/kata/5467e4d82edf8bbf40000155/train/cpp
#include <cinttypes>
#include <map>
#include <string>
#include <sstream>
#define ll unsigned long long
using namespace std;

uint64_t descendingOrder(uint64_t a) {
  stringstream ss;
  map<int,int> temp;
  for (int i = 0; i <= 9; i++) {
    temp[i] = 0;
  }
  
  string b = to_string(a);
  for (char i: b){
    temp[int(i)-48]++;
  }
  
  string ans = "";
  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < temp[i]; j++) {
      ans += to_string(i);
    }
  }
  
  ll intans;
  ss << ans;
  ss >> intans;
  
  return intans;
}
