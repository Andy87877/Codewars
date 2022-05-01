// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp
using namespace std;

bool set_alarm(const bool& employed,const bool& vacation){
  if (employed && !vacation) {
    return true;
  } else {
    return false;
  }
}
