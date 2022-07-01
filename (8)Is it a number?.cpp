// https://www.codewars.com/kata/57126304cdbf63c6770012bd/train/cpp
using namespace std;
bool is_digit(string s) {
  cout << s << endl;
  if (s == "") {
    return false;
  }
  
  if ((int(s[0]) >= int('0')) && (int(s[0]) <= int('9'))) {
  } else {
    if (s[0] != '-') {
      return false;
    }
  }
  
  bool flag = false;
  for (int i = 1; i < s.size(); i++){
    if ((int(s[i]) >= int('0')) && (int(s[i]) <= int('9'))) {
    } else {
      if (s[i] == '.') {
//         if (flag) {
//           return false;
//         } else {
//           flag = true;
//         }
      } else {
        return false;
      }
    }
  }
  
  
  return true;
}
