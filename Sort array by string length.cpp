// https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c/train/cpp
using namespace std;
class Kata
{
public:
    vector<string> sortByLength(vector<string> array) {
      string temp;
      for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array.size()-i-1; j++) {
          if (array[j].size() > array[j+1].size()) {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
          }
        }
      }
      return array;
    }
    
};
