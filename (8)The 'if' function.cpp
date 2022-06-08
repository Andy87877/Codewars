// https://www.codewars.com/kata/54147087d5c2ebe4f1000805/train/cpp
using namespace std;
void _if(bool value, function<void(void)> func1, function<void(void)> func2) {
  if (value) {
    func1();
  } else {
    func2();
  }
}
