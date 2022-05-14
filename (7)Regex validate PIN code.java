// https://www.codewars.com/kata/55f8a9c06c018a0d6e000132/train/java
public class Solution {

  public static boolean validatePin(String pin) {
    if ((pin.length() != 4) && (pin.length() != 6)) {
      return false;
    }
    for (int i = 0; i < pin.length(); i++) {
      int num = pin.charAt(i);
//       System.out.println(pin.charAt(i));
//       System.out.println(num);
      
      num -= 48;
      boolean flag = true;
      for (int j = 0; j <= 9; j++) {
         if (num == j) {
           flag = false;
         }
      }
      
      if (flag) {
        return false;
      }
      
    }
    return true; 
  }

}
