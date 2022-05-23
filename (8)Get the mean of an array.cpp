// https://www.codewars.com/kata/563e320cee5dddcf77000158/train/cpp
#include <vector>
using namespace std;

int get_average(vector <int> marks) {
  long long total = 0;
  for (int i: marks){
    total += i;
  }
  return total/marks.size();
}
