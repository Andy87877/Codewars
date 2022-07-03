// https://www.codewars.com/kata/52b5247074ea613a09000164/train/cpp
unsigned int cookingTime(unsigned int eggs) {
  return ((eggs/8)+(eggs%8 != 0))*5;
}
