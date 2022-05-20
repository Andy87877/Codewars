// https://www.codewars.com/kata/5f6d533e1475f30001e47514/train/cpp
using namespace std;
bool consecutive(vector<int>arr, int a,int b){
  for (int i = 0; i < arr.size()-1; i++){
    if (((arr[i] == a) || (arr[i] == b)) && ((arr[i+1] == a) || (arr[i+1] == b))) {
      return true;
    }
    if ((arr[i] == a) || (arr[i] == b)) {
      return false;
    }
  }
  return false;
}
