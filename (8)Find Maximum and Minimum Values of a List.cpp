// https://www.codewars.com/kata/577a98a6ae28071780000989/train/cpp
#include <vector>
using namespace std;

int min(vector<int> list){
    int Min = list[0];
    for (auto i: list) {
      if (Min > i) {
        Min = i;
      }
    }
    return Min;
}

int max(vector<int> list){
    int Max = list[0];
    for (auto i: list) {
      if (Max < i) {
        Max = i;
      }
    }
    return Max;
}
