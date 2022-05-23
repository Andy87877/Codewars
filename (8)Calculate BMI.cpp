// https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp
using namespace std;
string bmi(double w, double h) {
  double bmi;
  bmi = w/(h*h);
  cout << bmi << " " << w << " " << h << endl;
  if (bmi <= 18.5) {
    return "Underweight";
  } else if (bmi <= 25.000001) {
    return "Normal";
  } else if (bmi <= 30.000001) {
    return "Overweight";
  } else {
    return "Obese";
  }
}
