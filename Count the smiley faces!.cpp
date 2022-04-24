// https://www.codewars.com/kata/583203e6eb35d7980400002a/train/cpp
using namespace std;

int countSmileys(std::vector<std::string> arr) {
  int total = 0;
  
  for (auto i: arr) {
    if (i.size() == 2) {
      if ((i[0] == ':') || (i[0] == ';')) {
        if ((i[1] == ')') || (i[1] == 'D')) {
          total++;
        }
      }
    } else if (i.size() == 3) {
      if ((i[0] == ':') || (i[0] == ';')) {
        if ((i[1] == '-') || (i[1] == '~')) {
          if ((i[2] == ')') || (i[2] == 'D')) {
            total++;
          }
        }
      }
    }
  }
  
  return total;
}
