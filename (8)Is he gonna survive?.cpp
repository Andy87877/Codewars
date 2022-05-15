// https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/cpp
bool hero(long long bullets, long long dragons) {
  if (dragons == 0) {
    return true;
  }
  
  if ((bullets / dragons) >= 2) {
    return true;
  } else {
    return false;
  }
}
