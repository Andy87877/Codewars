// https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/cpp
#include <string>
using namespace std;

string greet(const string& name, const string& owner) {
  if (name == owner) {
    return "Hello boss";
  } else {
    return "Hello guest";
  }
}
