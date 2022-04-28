// https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp
#include <string>
using namespace std;
std::string DNAStrand(const std::string& dna) {
  string ans;
  for (auto i: dna) {
    if (i == 'A') {
      ans += 'T';
    } else if (i == 'T') {
      ans += 'A';
    } else if (i == 'G') {
      ans += 'C';
    } else {
      ans += 'G';
    }
  }
  return ans;
}
