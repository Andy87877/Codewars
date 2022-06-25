// https://www.codewars.com/kata/5bb0c58f484fcd170700063d/train/cpp
long pillars(int num_of_pillars, int distance, int width) {
  return (distance)*(num_of_pillars-1)*(num_of_pillars > 1)*100 + (width)*(num_of_pillars-2)*(num_of_pillars > 2);
}
