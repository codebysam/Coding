import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Time_Conversion {

    static String timeConversion(String s) {
        // Complete this function
        String s2 = "",numstr="";
        int num;
        int l = s.length();
        if(s.charAt(8) == 'A')
        {
            if(s.charAt(0) == '1' && s.charAt(1) == '2')
            {
                s2 = s2 + "00";
                for(int i = 2;i < 8;i++)
                    s2 = s2 + s.charAt(i);
            }
            else
            {
                for(int i = 0;i < 8;i++)
                    s2 = s2 + s.charAt(i);
            }
        }
        else
        {
            if(s.charAt(0) == '1' && s.charAt(1) == '2')
            {
                for(int i = 0;i < 8;i++)
                    s2 = s2 + s.charAt(i);
            }
            else
            {
                numstr += s.charAt(0);
                numstr+=s.charAt(1);
                num = Integer.parseInt(numstr);
                num = num+12;
                s2 = String.valueOf(num);
                for(int i = 2;i < 8;i++)
                    s2 = s2 + s.charAt(i);
            }
        }
        return s2;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}
