// https://www.codewars.com/kata/56f6ad906b88de513f000d96/train/cpp
#include<string> 
using namespace std;

string bonus_time(int salary, bool bonus) {
  string ans;
  if (bonus) {
    salary *= 10;
  }
  ans = "$" + to_string(salary);
  return ans;
}
