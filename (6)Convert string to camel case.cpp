// https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp
#include <string>
#include <cctype>
using namespace std;

string to_camel_case(string text) {
  string ans = "";
  char temp;
  for (int i = 0; i < text.size(); i++) {
    if ((text[i] == '_') || (text[i] == '-')) {
      if (i != text.size()-1) {
        i++;
        temp = toupper(text[i]); // idk why below can't :(
        //temp = char((int)text[i]+(int)'A'-(int)'a');
        ans += temp;
      }
    } else {
      ans += text[i];
    }
  }
  return ans;
}
