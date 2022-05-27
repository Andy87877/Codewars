// https://www.codewars.com/kata/59cfc09a86a6fdf6df0000f1/train/cpp
#include <vector>
#include <string>
using namespace std;

string capitalize(string s, vector<int> idxs) {
  cout << s << endl;
  for (int i: idxs) {
    if ((i <= s.size()-1) && (int(s[i]) >= int('a')) && (int(s[i]) <= int('z'))) {
      s[i] = char(int(s[i])+(int('A')-int('a')));
    }
  }
  return s;
}
