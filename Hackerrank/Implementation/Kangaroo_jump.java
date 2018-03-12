import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Kangaroo_jump {

    static String kangaroo(int x1, int v1, int x2, int v2) {
        // Complete this function
        int k1,k2,vel1,vel2,flag=0;
        if(x1 < x2)
        {
            k1 = x1;vel1 = v1;
            k2 = x2;vel2 = v2;
        }
        else
        {
            k1 = x2;vel1 = v2;
            k2 = x1;vel2 = v1;
        }
        while(k1 <= k2)
        {
            if(k1 == k2)
            {
                flag = 1;
                break;
            }
            k1+=vel1;
            k2+=vel2;  
        }
        if(flag == 1)
            return "YES";
        else
            return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int v1 = in.nextInt();
        int x2 = in.nextInt();
        int v2 = in.nextInt();
        String result = kangaroo(x1, v1, x2, v2);
        System.out.println(result);
    }
}
