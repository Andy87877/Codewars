// https://www.codewars.com/kata/568d0dd208ee69389d000016/train/cpp
int rental_car_cost(int d){
  int ans = 40*d;
  if (d >= 7) {
    ans -= 50;
  } else if (d >= 3) {
    ans -= 20;
  }
  return ans;
}
