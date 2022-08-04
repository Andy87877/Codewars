// https://www.codewars.com/kata/58841cb52a077503c4000015/train/cpp
int circleOfNumbers(int n, int firstNumber){
  if (n/2 > firstNumber) {
    return firstNumber+n/2;
  } 
  return firstNumber-n/2;
}
