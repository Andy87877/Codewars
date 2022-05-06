// https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/cpp
#include <vector>
using namespace std;
vector<int> invert(vector<int> values){
  for (int i = 0; i < values.size(); i++) {
    values[i] *= -1;
  }
  return values;
}
