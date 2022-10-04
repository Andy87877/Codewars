// https://www.codewars.com/kata/59dd3ccdded72fc78b000b25/train/c
char* whatday(int num) {
  char* all[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  if (num >= 1 && num <= 7) {
    return all[num-1];
  }
  return "Wrong, please enter a number between 1 and 7";
}
