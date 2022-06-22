// https://www.codewars.com/kata/55031bba8cba40ada90011c4/train/cpp
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#define ll long long
using namespace std;



class Cubes
{
public:
  static string isSumOfCubes(string &str) {
    string temp = "";
    vector<string> vec;
    stringstream ss;
    cout << str << endl;
    
    for (ll i = 0; i < str.size(); i++) {
      if ((int(str[i]) >= int('0')) && (int(str[i]) <= int('9'))) {
        temp += str[i];
      } else {
        if (temp != "") vec.push_back(temp);
        temp = "";
      }
      
      if (temp.size() == 3) {
        vec.push_back(temp);
        temp = "";
      }
    }
    
    if (temp != "") vec.push_back(temp);
    string ans = "";
    ll total = 0;
    for (auto i: vec) {
      cout << i << endl;
      ss.clear();
      int num;
      ss << i;
      ss >> num;
      if (i.size() == 3) {
        if ((pow((int(i[0])-48),3) + pow((int(i[1])-48),3) + pow((int(i[2])-48),3)) == num) {
          ans += to_string(num);
          ans += " ";
          total += num;
        }
      } else if (i.size() == 2) {
        if ((pow((int(i[0])-48),3) + pow((int(i[1])-48),3)) == num) {
          ans += to_string(num);
          ans += " ";
          total += num;
        }
      } else {
        if ((pow((int(i[0])-48),3)) == num) {
          ans += to_string(num);
          ans += " ";
          total += num;
        }
      }
    }
    if (ans != "") {
      ans += to_string(total);
      ans += " Lucky";
    } else {
      ans += "Unlucky";
    }
    
    
    return ans;
  };
};
