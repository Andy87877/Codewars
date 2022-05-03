// https://www.codewars.com/kata/57f24e6a18e9fad8eb000296/train/cpp
#include <string>
using namespace std;
string how_much_i_love_you(int nb_petals) {
  string l[6] = {"I love you","a little", "a lot", "passionately", "madly", "not at all"};
  return l[((nb_petals-1)%6)];
}
