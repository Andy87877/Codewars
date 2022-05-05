// https://www.codewars.com/kata/5861d28f124b35723e00005e/train/cpp
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left){
 if (distance_to_pump > mpg * fuel_left) {
   return false;
 } else {
   return true;
 }
}
