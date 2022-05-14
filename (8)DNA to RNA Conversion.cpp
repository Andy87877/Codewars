// https://www.codewars.com/kata/5556282156230d0e5e000089/train/cpp
#include <string>
using namespace std;

string DNAtoRNA(string dna){
  string rna = "";
  for (auto i: dna) {
    if (i == 'T') {
      rna += "U";
    } else {
      rna += i;
    }
  }
  return rna;
}
