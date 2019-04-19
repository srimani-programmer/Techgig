/* Read input from STDIN. Print your output to STDOUT*/

import java.io.*;
import java.util.*;

class CandidateCode {
   public static void main(String args[] ) throws Exception {

      Scanner sc = new Scanner(System.in);
      String s = "";
      int i;
      float f;
      s += sc.nextLine();
      i = sc.nextInt();
      f = sc.nextFloat();
      System.out.println(s);
      System.out.println(i);
      System.out.println(f);

   }
}
