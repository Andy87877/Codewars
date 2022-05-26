// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp
#include <string>
using namespace std;

class Printer
{
public:
    static string printerError(const string &s) {
      long long total = 0;
      string ans;
      for (auto i: s){
        if ((int(i) >= int('n')) && (int(i) <= int('z'))) {
          total++;
        }
      }
      ans = to_string(total) + "/" + to_string(s.size());
      return ans;
    };
};
