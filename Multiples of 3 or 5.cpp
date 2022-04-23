// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp
int solution(int number) 
{
  int total = 0;
  for (int i = 1; i < number; i++) {
    if (((i % 3) == 0) || ((i % 5) == 0)) {
      total += i;
    }
  }
  return total;
}
