// https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/cpp
#include <string>
using namespace std;
class Accumul
{
public:
    static string accum(const string &s){
      string st = "", ans = "";
      for (char i: s){
        if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
          st += char(int(i)-(int('A')-int('a')));
        } else {
          st += i;
        }
      }
      
      char temp;
      for (int i = 0; i < s.size()-1; i++) {
        temp = st[i];
        ans += (int(temp)+(int('A')-int('a')));
        for (int j = 0; j < i; j++) {
          ans += temp;
        }
        ans += '-';
      }
      
      temp = st[st.size()-1];
      ans += (int(temp)+(int('A')-int('a')));
      for (int i = 0; i < s.size()-1; i++) {
        ans += temp;
      }
      return ans;
    };
};
