// https://www.codewars.com/kata/58dced7b702b805b200000be/train/cpp
#include <bits/stdc++.h>
using namespace std;

double distance_between_two_points(const Point& a, const Point& b) {
  return pow(((abs(a.x-b.x)*abs(a.x-b.x))+(abs(a.y-b.y)*abs(a.y-b.y))),0.5);
}
