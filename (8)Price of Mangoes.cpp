// https://www.codewars.com/kata/57a77726bb9944d000000b06/train/cpp
using namespace std;
int mango(int quantity, int price) {
  cout << quantity << " " << price << endl;
  quantity = (quantity+(quantity%3 != 0))*2/3;
  return quantity*price;  
}
