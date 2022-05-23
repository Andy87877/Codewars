// https://www.codewars.com/kata/588417e576933b0ec9000045/train/cpp
int seats_in_theater(int total_col, int total_row, int col, int row) {
  return (total_col-col+1)*(total_row-row);
}
