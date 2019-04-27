import java.io.*;
import java.util.*;

public class TriangleArea{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int base = sc.nextInt();
        int height = sc.nextInt();

        double result = 0.5 * base * height;
        System.out.printf("%.0f",result);
    }
}