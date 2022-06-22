// https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp
#include <bits/stdc++.h>
using namespace std;

class Kata{
public:
    vector<int> sortArray(vector<int> array){
      vector<int> odd;
      for (auto i: array) {
        if (i%2) odd.push_back(i);
      }  
      sort(odd.begin(), odd.end());
      
      vector<int> ans;
      int temp = 0;
      for (auto i: array) {
        if (i%2){
          ans.push_back(odd[temp]); 
          temp++;
        } else {
          ans.push_back(i);
        } 
      }
      return ans;
    }
};
