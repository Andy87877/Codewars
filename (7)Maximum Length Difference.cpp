// https://www.codewars.com/kata/5663f5305102699bad000056/train/cpp
#include <bits/stdc++.h>
using namespace std;

class MaxDiffLength
{
public:
    static int mxdiflg(vector<string> &a1, vector<string> &a2) {
      vector<int> vec1;
      vector<int> vec2;
      for (auto i: a1) {
        vec1.push_back(i.size());
      }
      sort(vec1.begin(), vec1.end());
      for (auto i: a2) {
        vec2.push_back(i.size());
      }
      sort(vec2.begin(), vec2.end());
      if (vec1.size() == 0 || vec2.size() == 0) {
        return -1;
      }
      return max(abs(vec1[0]-vec2[vec2.size()-1]),abs(vec2[0]-vec1[vec1.size()-1]));
    };
};
