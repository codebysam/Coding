import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Plus_Minus {
    static DecimalFormat round = new DecimalFormat("0.000000");
    static void plusMinus(int[] arr) {
        // Complete this function
        int n = arr.length,neg = 0,pos = 0,z = 0;
        for(int i = 0;i < n;i++)
        {
            if(arr[i] < 0)
                neg++;
            else
            if(arr[i] == 0)
                z++;
            else
                pos++;
        }
        System.out.println(round.format(pos/((double)n)));
        System.out.println(round.format(neg/((double)n)));
        System.out.println(round.format(z/((double)n)));
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        plusMinus(arr);
        in.close();
    }
}
