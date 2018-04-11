import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Staircase {

    static void staircase_func(int n) {
        // Complete this function
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                if(j < n-i-1)
                    System.out.print(" ");
                else
                    System.out.print("#");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        staircase_func(n);
        in.close();
    }
}
