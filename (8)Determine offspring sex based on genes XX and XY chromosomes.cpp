// https://www.codewars.com/kata/56530b444e831334c0000020/train/cpp
using namespace std;
string chromosomeCheck(string sperm) {
  if (sperm[1] == 'Y') {
    return "Congratulations! You're going to have a son.";
  } else {
    return "Congratulations! You're going to have a daughter.";
  }
}
