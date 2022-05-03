// https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp
#include <string>
using namespace std;

string update_light(string current) {
  if (current == "green") {
    return "yellow";
  } else if (current == "yellow") {
    return "red";
  } else {
    return "green";
  }
}
