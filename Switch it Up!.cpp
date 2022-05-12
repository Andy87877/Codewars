// https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/cpp
#include <string>
using namespace std;
string switch_it_up(int number){
  int num[10] = {0,1,2,3,4,5,6,7,8,9};
  string str[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
  for (int i = 0; i < 10; i++) {
    if (num[i] == number) {
      return str[i];
    }
  }
}
