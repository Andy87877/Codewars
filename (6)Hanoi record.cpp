// https://www.codewars.com/kata/534eb5ad704a49dcfa000ba6/train/cpp
#include <bits/stdc++.h>
unsigned long long hanoi(unsigned disks) {
  return pow(2, disks)-1;
}
