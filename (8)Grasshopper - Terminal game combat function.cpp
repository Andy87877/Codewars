// https://www.codewars.com/kata/586c1cf4b98de0399300001d/train/cpp
int combat(int health, int damage){
  if (health > damage){
    return health-damage;
  } else {
    return 0;
  }
}
