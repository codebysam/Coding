import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Diagonal_Difference {

    static int diagonalDifference(int[][] a,int n) {
        // Complete this function
        int sum1 = 0,sum2 = 0;
        for(int i = 0;i < n;i++)
        {
            sum1 = sum1 + a[i][i];
        }
        
        for(int i = 0;i < n;i++)
        {
            sum2 = sum2 + a[i][n-i-1];
        }
        return Math.abs(sum2 - sum1);
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] a = new int[n][n];
        for(int a_i = 0; a_i < n; a_i++){
            for(int a_j = 0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
            }
        }
        int result = diagonalDifference(a,n);
        System.out.println(result);
        in.close();
    }
}
