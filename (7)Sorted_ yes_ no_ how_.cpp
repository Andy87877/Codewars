// https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp
using namespace std; 
string is_sorted_and_how(vector<int> array) {
  bool up = true, down = true;
  for (int i = 0; i < array.size()-1; i++) {
    if (array[i] < array[i+1]) {
      down = false;
    } else if (array[i] > array[i+1]){
      up = false;
    }
  }
  if (down) {
    return "yes, descending";
  } else if (up) {
    return "yes, ascending";
  } else {
    return "no";
  }
}
