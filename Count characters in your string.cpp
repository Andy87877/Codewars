// https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp
#include <map>
#include <string>
using namespace std;

map<char, unsigned> count(const string& string) {
    map<char, unsigned> ans;
    for (auto i: string) {
      ans[i]++;
    }
    return ans;
}
