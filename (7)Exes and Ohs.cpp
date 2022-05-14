// https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp
using namespace std;
bool XO(const std::string& str) {
  int x = 0, o = 0;
  for (auto i: str) {
    if ((i == 'x') || (i == 'X')) {
      x++;
    } else if ((i == 'o') || (i == 'O')) {
      o++;
    } 
  }
  // cout << str << x << ' ' << o << endl;
  if (x == o) {
    return true;
  } else {
    return false;
  }
}
