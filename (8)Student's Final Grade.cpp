// https://www.codewars.com/kata/5ad0d8356165e63c140014d4/train/cpp
using namespace std;
int final_grade(int exam, int projects){
  cout << exam << " " << projects << endl;
  if ((exam > 90) || (projects > 10)) {
    return 100;
  } else if ((exam > 75) && (projects >= 5)) {
   return 90;
  } else if ((exam > 50) && (projects >= 2)) {
   return 75;
  } else {
    return 0;
  }
}
