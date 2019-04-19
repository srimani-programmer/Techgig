import java.io.*;
import java.util.*;

public class RectangleArea{
    public static void main(String[] args)throws Exception {
        int length,breadth;
        Scanner sc = new Scanner(System.in);
        length = sc.nextInt();
        breadth = sc.nextInt();

        System.out.print(length * breadth);
    }
}