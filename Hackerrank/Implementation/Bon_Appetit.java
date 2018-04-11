import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Bon_Appetit {

    static void bonAppetit(int n, int k, int b, int[] ar) {
        // Complete this function
        int sum = -1 * ar[k];
        for(int i = 0;i < n;i++)
        {
            sum = sum + ar[i];
        }
        int share = sum / 2;
        if(share == b)
        {
            System.out.println("Bon Appetit");
        }
        else
        {
            System.out.println(b - share);
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        bonAppetit(n, k, b, ar);
    }
}
