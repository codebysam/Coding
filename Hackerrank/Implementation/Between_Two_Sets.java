import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Between_Two_Sets {
    static int LCM(int a,int b)
    {
        int rem,x = a,y = b;
        do
        {
            rem = x % y;
            x = y;
            y = rem;
        }while(rem != 0);
        
        return (a * b)/x;
    }

    static int getTotalX(int[] a, int[] b) {
        // Complete this function
        int flag,count = 0;
        int lcm = 1;
        for(int i = 0;i < a.length;i++)
        {
            lcm = LCM(a[i],lcm);
        }
        int x = lcm;
        while(x <= b[0])
        {
            flag = 1;
            for(int j = 0;j < b.length;j++)
            {
                if(b[j] % x != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                count++;
            }    
            x+=lcm;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for(int a_i = 0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int[] b = new int[m];
        for(int b_i = 0; b_i < m; b_i++){
            b[b_i] = in.nextInt();
        }
        int total = getTotalX(a, b);
        System.out.println(total);
        in.close();
    }
}
