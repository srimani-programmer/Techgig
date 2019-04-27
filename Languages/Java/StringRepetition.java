import java.io.*;
import java.util.*;

public class StringRepetition{
    public static void main(String[] args) throws Exception {
        String s = "";
        Scanner sc = new Scanner(System.in);
        s += sc.nextLine();
        int number = sc.nextInt();
        String result = "";
        for(int i=0;i<number;i++)
           result += s;

        System.out.println(result);
    }
}