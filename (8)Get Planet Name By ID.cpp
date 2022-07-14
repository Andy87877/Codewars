// https://www.codewars.com/kata/515e188a311df01cba000003/train/cpp
#include <bits/stdc++.h>
using namespace std;
string get_planet_name(int id){
  string planet[8] = {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};
  return planet[id-1];
}
