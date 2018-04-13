import java.util.Scanner;
public class StringRotation{
    static boolean isRotation(String s1,String s2)
    {
        int l1,l2;
        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();
        l1 = s1.length();
        l2 = s2.length();
        if(l1 != l2)
            return false;
        for(int i = 0;i < l2;i++)
        {
            if(s1.equals(s2))
                return true;
            else
            {
                s2 = s2.substring(1) + s2.charAt(0);
                System.out.println(s2);
            }
        }
        return false;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int x;
        String s1,s2,s;
        do{
            System.out.print("Enter the first string >> ");
            s1 = sc.nextLine();
            System.out.print("Enter the second string >> ");
            s2 = sc.nextLine();
            if(isRotation(s1,s2))
            {
                System.out.println("Yes, s2 is the rotation of s1.");
            }
            else
            {
                System.out.println("No, s2 is not the rotation of s1.");
            }
            System.out.print("Try more ? (0/1) >> ");
            x = Integer.parseInt(sc.nextLine());
            
        }while(x != 0);
    }
}