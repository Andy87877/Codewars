// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
using namespace std;
int basicOp(char op, int a, int b) {
  if (op == '+') {
    return a+b;
  } else if (op == '-') {
    return a-b;
  } else if (op == '*') {
    return a*b;
  } else {
    return a/b;
  }
}
