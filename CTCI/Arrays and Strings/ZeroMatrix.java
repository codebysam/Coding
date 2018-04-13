import java.util.*;
public class ZeroMatrix{
    
    static int[][] Nullify(int m1[][],int m,int n)
    {
        boolean fcol = false, frow = false;
        for(int i = 0;i < m;i++)
        {
            if(m1[i][0] == 0)
            {
                fcol = true;
            }
        }
        for(int i = 0;i < n;i++)
        {
            if(m1[0][i] == 0)
            {
                frow = true;
            }
        }
        for(int i = 1;i < m;i++)
        {
            for(int j = 1;j < n;j++)
            {
                if(m1[i][j] == 0)
                {
                    m1[0][j] = 0;
                    m1[i][0] = 0;
                }
            }
        }

        for(int i = 0;i < m;i++)
        {
            if(m1[i][0] == 0)
            {
                for(int j = 0;j < n;j++)
                {
                    m1[i][j] = 0;
                }
            }
        }

        for(int i = 0;i < n;i++)
        {
            if(m1[0][i] == 0)
            {
                for(int j = 0;j < m;j++)
                {
                    m1[j][i] = 0;
                }
            }
        }
        if(frow)
        {
            for(int i = 0;i < n;i++)
                m1[0][i] = 0;
        }
        if(fcol)
        {
            for(int i = 0; i < m;i++)
                m1[i][0] = 0;
        }

        return m1;
    }
    static void display(int m[][])
    {
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

        System.out.println("The original matrix >> ");
        display(m1);

        System.out.println("\nThe nullified matrix is >> ");
        m1 = Nullify(m1,m,n);
        display(m1);

        
    }
}