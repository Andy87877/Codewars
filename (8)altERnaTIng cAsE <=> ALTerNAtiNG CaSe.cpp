// https://www.codewars.com/kata/56efc695740d30f963000557/train/cpp

using namespace std;
string to_alternating_case(const string& str) {
	string ans = "";
  for (auto i: str) {
    if ((int(i) >= int('a')) && (int(i) <= int('z'))) {
      ans += char(int(i)-32);
    } else if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
      ans += char(int(i)+32);
    } else {
      ans += i;
    }
  }
  return ans;
}
