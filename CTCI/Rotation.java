import java.util.*;
public class Rotation{
    static int[][] rotateLeft(int m1[][],int m,int n)
    {
        int i,j,k,l,m2[][] = new int[n][m];
        for(k = 0,j=n-1;k < n;k++,j--)
        {
            for(l = 0,i=0;l < m;l++,i++)
            {
                //System.out.println("("+k+","+l+") = ("+i+","+j+")");
                m2[k][l] = m1[i][j];
            }
        }
        display(m2);
        return m2;
    }

    static int[][] rotateRight(int m1[][],int m,int n)
    {
        int i,j,k,l,m2[][] = new int[n][m];
        for(k = 0,j=0;k < n;k++,j++)
        {
            for(l = 0,i=m-1;l < m;l++,i--)
            {
                //System.out.println("("+k+","+l+") = ("+i+","+j+")");
                m2[k][l] = m1[i][j];
            }
        }
        display(m2);
        return m2;
    }

    static void display(int m[][])
    {
        System.out.println("\nThe matrix is >> ");
        for(int i = 0;i < m.length;i++)
        {
            for(int j = 0;j < m[0].length;j++)
            {
                System.out.print(m[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int m,n,i,j,x;
        System.out.print("Enter the number of rows >> ");
        m = sc.nextInt();
        System.out.print("Enter the number of columns >> ");
        n = sc.nextInt();
        int m1[][] = new int[m][n];
        System.out.println("Enter the elements of the matrix >> ");
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < n;j++)
            {
                m1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Initially: ");
        display(m1);

        do{
            System.out.print("\nMenu:\n0) EXIT\n1) ROTATE LEFT\n2) ROTATE RIGHT\nENTER YOUR CHOICE >> ");
            x = sc.nextInt();
            switch(x)
            {
                case 1:
                m1 = rotateLeft(m1,m1.length,m1[0].length);
                break;

                case 2:
                m1 = rotateRight(m1,m1.length,m1[0].length);
                break;
            }
        }while(x != 0);
    }
}