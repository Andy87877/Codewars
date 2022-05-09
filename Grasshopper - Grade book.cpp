// https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/cpp
char getGrade(int a, int b, int c) {
  double total = (a+b+c)/3;
  if (total >= 90) {
    return 'A';
  } else if (total >= 80) {
    return 'B';
  } else if (total >= 70) {
    return 'C';
  } else if (total >= 60) {
    return 'D';
  } else {
    return 'F';
  }
}
