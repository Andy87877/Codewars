// https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/cpp
int getRealFloor(int f) {
  if (f <= 0) {
    return f;
  } else if (f <= 13) {
    return f-1;
  } else {
    return f-2;
  }
}
