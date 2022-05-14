// https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/cpp
#include <sstream>
using namespace std;

vector<int> digitize(unsigned long n) {        
  vector <int> ans;
  if (n == 0) {
    ans.push_back(0);
  }
  
  while(n > 0) {
    ans.push_back(n%10);
    n /= 10;
  }
  
  return ans;
}
