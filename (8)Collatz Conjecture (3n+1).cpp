// https://www.codewars.com/kata/577a6e90d48e51c55e000217/train/cpp
unsigned int hotpo(unsigned int n){
  if(n == 0) return 0; //Optional Handler to n = 0
  unsigned int total = 0;
  while (n != 1) {
    if (n%2) {
      n = n*3+1;
    } else {
      n = n/2;
    }
    total++;
  }
  return total;
}
