import java.io.*;
import java.util.*;

public class StringSlice{
    public static void main(String[] args) throws Exception {
        String s = "";
        int start,end;
        Scanner sc = new Scanner(System.in);
        s += sc.nextLine();
        start = sc.nextInt();
        end = sc.nextInt();
        sc.close();
        for(int i=start;i<=end;i++)
            System.out.print(s.charAt(i));
    }
}