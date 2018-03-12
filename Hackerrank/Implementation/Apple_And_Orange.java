import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Apple_And_Orange {

    static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges) {
        // Complete this function
        int apple_count = 0,
            orange_count = 0,
            n1 = apples.length,
            n2 = oranges.length;
        for(int i = 0;i < n1;i++)
        {
            int index = a + apples[i];
            if(index >= s && index <= t)
            {
                apple_count++;
            }
        }
        for(int i = 0;i < n2;i++)
        {
            int index = b + oranges[i];
            if(index >= s && index <= t)
            {
                orange_count++;
            }
        }
        System.out.println(apple_count);
        System.out.println(orange_count);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int apple_i = 0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int orange_i = 0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
        }
        countApplesAndOranges(s, t, a, b, apple, orange);
        in.close();
    }
}
