import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Breaking_The_Records {

    static int[] breakingRecords(int[] score) {
        // Complete this function
        int max = score[0],
            min = score[0],
            count[] = {0,0};
        for(int i = 1;i < score.length;i++)
        {
            if(max < score[i])
            {
                max = score[i];
                count[0]++;
            }
            if(min > score[i])
            {
                min = score[i];
                count[1]++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] score = new int[n];
        for(int score_i = 0; score_i < n; score_i++){
            score[score_i] = in.nextInt();
        }
        int[] result = breakingRecords(score);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? " " : ""));
        }
        System.out.println("");


        in.close();
    }
}
