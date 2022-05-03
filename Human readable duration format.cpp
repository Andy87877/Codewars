// https://www.codewars.com/kata/52742f58faf5485cae000b9a/train/cpp
#include <string>
#include <map>
#include <sstream>
#define ll long long
using namespace std;

string format_duration(ll seconds) {
  stringstream ss;
  if (seconds == 0) {
    return "now";
  }
  
  ll temp = 0, len = 0;
  
  map<string, ll> time;
  string timearray[5] = {"year","day","hour","minute","second"};
  for (auto i: timearray) {
    time[i] = 0;
  }
  
  
  if (seconds >= 60*60*24*365) {
    temp = seconds/(60*60*24*365);
    time["year"] = temp;
    len++;
    cout << temp << endl;
    seconds -= temp*(60*60*24*365);
  }
  if (seconds >= 60*60*24) {
    temp = seconds/(60*60*24);
    time["day"] = temp;
    len++;
    cout << temp << endl;
    seconds -= temp*(60*60*24);
  }
  if (seconds >= 60*60) {
    temp = seconds/(60*60);
    time["hour"] = temp;
    len++;
    cout << temp << endl;
    seconds -= temp*(60*60);
  }
  if (seconds >= 60) {
    temp = seconds/60;
    time["minute"] = temp;
    len++;
    cout << temp << endl;
    seconds -= temp*60;
  }
  if (seconds != 0) {
    temp = seconds;
    time["second"] = temp;
    len++;
    cout << temp << endl;
  }
  
  string s = "";
  for (auto i: timearray) {
    string stringtemp = "";
    if (time[i] != 0) {
      if (time[i] == 1) {
        stringtemp = "1 ";
        stringtemp += i;
      } else {
        ss.clear();
        temp = time[i];
        ss << temp;
        ss >> stringtemp;
        stringtemp += " ";
        stringtemp += i;
        stringtemp += "s";
      }
      s += stringtemp;
      if (len > 2) {
        s += ", ";
      } else if (len > 1){
        s += " and ";
      }
      len--;
    }
  }
  return s;
}
