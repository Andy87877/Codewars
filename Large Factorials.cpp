// https://www.codewars.com/kata/557f6437bf8dcdd135000010/train/cpp
#include <string>
#include <sstream>
using namespace std;

string factorial(int factorial){
  long long n = 1;
  stringstream ss;
  string s;
  for (int i = 1; i <= factorial; i++) {
    n *= i;
  }
  ss << n;
  ss >> s;
  
  return s;
}
