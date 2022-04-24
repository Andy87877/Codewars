// https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
#include <string>
using namespace std;

string rot13(string msg){
    char s;
    string ans = "";
    int temp;
    
    for (char i: msg) {
      temp = (int)i;
      if ((temp >= (int)'n')) {
        s = char(temp-13);
      } else if ((temp >= (int)'a')) {
        s = char(temp+13);
      } else if ((temp >= (int)'N')) {
        s = char(temp-13);
      } else if ((temp >= (int)'A')) {
        s = char(temp+13);
      } else {
        s = char(temp);
      }
      ans += s;
    }
  
    return ans;
}

/*
ABCDEFGHIJKLM   NOPQRSTUVWXYZ        abcdefghijklm   nopqrstuvwxyz
NOPQRSTUVWXYZ   ABCDEFGHIJKLM        nopqrstuvwxyz   abcdefghijklm
*/
