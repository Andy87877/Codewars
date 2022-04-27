// https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#define ull unsigned long long
using namespace std;

ull square_digits(int num) {
  stringstream ss;
  string ans = "", str, tempstr;
  ull temp, numans=0;
  
  ss << num;
  ss >> str;

  for (auto i: str) {
    ss.clear();
    ss << i;
    ss >> temp;
    
    temp = temp*temp;

    ss.clear();
    ss << temp;
    ss >> tempstr;
    ans += tempstr;
  }
  
  ss.clear();
  ss << ans;
  ss >> numans;
  
  return numans;
}

// int main(){
//     int num = 0;
//     cin >> num;
//     cout << square_digits(num) << endl;
//     //square_digits(num);
// }