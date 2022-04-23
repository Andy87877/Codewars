// https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp
using namespace std;
string spinWords(const std::string &str) {
  vector<string> s;
  string charstring;
  for (auto i : str) {
    if (i == ' ') {
      s.push_back(charstring);
      charstring = "";
    } else {
      charstring += i;
    }
  }
  s.push_back(charstring);
  
  vector<string> ans;
  string temp;
  for (int i = 0; i < s.size(); i++) {
    charstring = "";
    temp = s[i];
    if (s[i].size() >= 5) {
      for (int j = s[i].size()-1; j >= 0; j--) {
        charstring += temp[j];
      }
      ans.push_back(charstring);
    } else {
      ans.push_back(temp);
    }
  }
  
  string strans;
  for (int i = 0; i < ans.size()-1; i++) {
    strans += ans[i];
    strans += ' ';
  }
  strans += ans[ans.size()-1];
  return strans;
}// spinWords
