// https://www.codewars.com/kata/56f699cd9400f5b7d8000b55/train/cpp
#include <array>
#include <string>
using namespace std;

array<string, 3> fixTheMeerkat(array<string, 3> arr) {
  return {arr[2],arr[1],arr[0]};
}
