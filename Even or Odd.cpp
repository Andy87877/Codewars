// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp
#include <string>
using namespace std;
std::string even_or_odd(int number) 
{
  if ((number%2) == 0) {
    return "Even";
  } else {
    return "Odd";
  }
}
