// https://www.codewars.com/kata/525f4206b73515bffb000b21/train/cpp
#include <string>
#include <sstream>
#include <iostream>
#define ull unsigned long long
using namespace std;

std::string add(const std::string& a, const std::string& b) {
  stringstream ss;
  
  string strtemp, ans="", realans = "";
  string stra = a, strb = b;
  
  ull anum=0, bnum=0, asize = a.size(), bsize = b.size(), numtemp;
  bool carry = false; //進位
  
  if (asize < bsize) {
    numtemp = asize;
    asize = bsize;
    bsize = numtemp;
    
    strtemp = stra;
    stra = strb;
    strb = strtemp;
  } // a < b --> a > b
  
  for (int i = bsize-1; i >= 0; i--) {
    ss.clear();
    ss << stra[i+asize-bsize]; ss >> anum;
    ss.clear();
    ss << strb[i]; ss >> bnum;
    numtemp = anum+bnum+carry;
    ss.clear();
    ss << (numtemp%10); ss >> strtemp;
    // cout << numtemp << endl;

    ans += strtemp;
    if (numtemp >= 10) {
      carry = true;
    } else {
      carry = false;
    }
  }

  for (int i = asize-bsize-1; i >= 0; i--) {
    ss.clear();
    ss << stra[i]; ss >> anum;
    ss.clear();
    numtemp = anum+carry;
    ss << (numtemp%10); ss >> strtemp;
    // cout << anum << endl;

    ans += strtemp;
    if (numtemp >= 10) {
      carry = true;
    } else {
      carry = false;
    }
  }

  if (carry) {
      ans += "1";
  }

  for (int i = ans.size()-1; i >= 0; i--) {
      realans += ans[i];
  }
//   for (int i = ans.size()-1; i >= 0; i--) {
//       cout << a[i] << endl;
//   }

//   cout << "Welcome ";
  return realans;
}

// int main() {
//     string a, b;
//     cin >> a >> b;
//     cout << add(a, b) << endl;
// }
// a > b


/* so small
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

std::string add(const std::string& a, const std::string& b) {
  stringstream ss;
  unsigned long long numa = 0, numb = 0, numsum;
  string sum;
  
  ss << a;
  ss >> numa;
  
  ss.clear();
  ss << b;
  ss >> numb;
  numsum = numa+numb;

  ss.clear();
  ss << numsum;
  ss >> sum;
  
  return sum;
}
*/
