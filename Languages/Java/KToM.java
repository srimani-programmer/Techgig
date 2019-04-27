import java.io.*;
import java.util.*;

public class KToM{
    public static void main(String[] args) {
        final double KTOM = 0.621371;
        Scanner sc = new Scanner(System.in);
        int kilometers = sc.nextInt();
        double result = kilometers * KTOM;
        System.out.printf("%.5f",result);
    }
}