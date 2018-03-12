import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Migratory_Birds {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
        int count[] = {0,0,0,0,0};
        for(int i = 0;i < n;i++)
        {
            count[ar[i]-1]++;
        }
        int max = count[0],type=1;
        for(int i = 1;i < 5;i++)
        {
            if(max < count[i])
            {
                max = count[i];
                type = i+1;
            }
        }
        return type;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
