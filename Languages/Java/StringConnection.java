/* Read input from STDIN. Print your output to STDOUT*/

import java.io.*;
import java.util.*;

public class StringConnection {
   public static void main(String args[] ) throws Exception {

      Scanner sc = new Scanner(System.in);
      String s1 = "", s2 = "";
      s1 += sc.nextLine();
      s2 += sc.nextLine();
      sc.close();
      s1 = s1.trim();
      s2 = s2.trim();
      System.out.println(s1+s2);

   }
}
