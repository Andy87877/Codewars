// https://www.codewars.com/kata/55225023e1be1ec8bc000390/train/cpp
using namespace std;
std::string greet(std::string name) {
  if (name == "Johnny") {
    return "Hello, my love!";
  }
  return ("Hello, " + name + "!");
}
