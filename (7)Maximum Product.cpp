// https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/cpp
#include <vector>
using namespace std; 

int adjacentElementsProduct(vector<int> inputArray) {
  int temp = inputArray[0]*inputArray[1], max;
  max = temp;
  
  for (int i = 2; i < inputArray.size(); i++) {
    temp = inputArray[i-1]*inputArray[i];
    if (max < temp) {
      max = temp;
    }
  }
  return max;
}
