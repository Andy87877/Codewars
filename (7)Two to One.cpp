// https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/cpp
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

class TwoToOne
{
public:
    static string longest(const string &s1, const string &s2) {
      map<int, char> temp;
      for (char i: s1) {
        temp[i]++;
      }
      for (char i: s2) {
        temp[i]++;
      }
      vector<char> charall;
      vector<int> intall;
      for (auto i: temp) {
        charall.push_back(i.first);
        intall.push_back(int(i.first));
      }
      
      int inttemp;
      char chartemp;
      for (int i = 0; i < charall.size(); i++) {
        for (int j = i; j < charall.size(); j++) {
          if (intall[i] > intall[j]) {
            inttemp = intall[i];
            intall[i] = intall[j];
            intall[j] = inttemp;
            
            chartemp = charall[i];
            charall[i] = charall[j];
            charall[j] = chartemp;
          }
        }
      }
      
      string ans = "";
      for (char i: charall) {
        ans += i;
      }
      return ans;
    };
};
