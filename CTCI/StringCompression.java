import java.util.Scanner;
public class StringCompression{
    static String compress(String s)
    {
        String s2 = "";
        s2+=s.charAt(0);
        int l = s.length(),count = 0,i;
        for(i = 0;i < l;i++)
        {
            if(s.charAt(i) == s2.charAt(s2.length()-1))
            {
                count++;
            }
            else
            {
                s2+=count;
                s2+=s.charAt(i);
                count = 1;
            }
        }
        s2+=count;
        if(s2.length() <= l)
            return s2;
        else
            return s;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int x;
        String str;
        do{
            System.out.print("Enter the string >> ");
            str = sc.nextLine();
            str = compress(str);
            System.out.println("The compressed string is "+str);
            System.out.print("Try more ? (0/1) >> ");
            x = sc.nextInt();
            sc.nextLine();
        }while(x != 0);
    }
}