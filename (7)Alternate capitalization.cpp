// https://www.codewars.com/kata/59cfc000aeb2844d16000075/train/cpp
#include <string>
#include <utility>
using namespace std;

pair<string, string> capitalize(const string &s) {
  string a = "", b = "";
  for (int i = 0; i < s.size(); i++) {
    if (i % 2) {
      a += int(s[i])+(int('A')-int('a'));
      b += s[i];
    } else {
      b += int(s[i])+(int('A')-int('a'));
      a += s[i];
    }
  }
  return {b,a};
}
