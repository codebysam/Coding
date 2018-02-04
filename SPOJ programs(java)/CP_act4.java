import java.util.Scanner;


public class CP_act4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int r[] = new int[t];
		int c[] = new int[t];
		int a[] = new int[t];
		int b[] = new int[t];
		for(int i = 0 ; i < t ; i++)
		{
			r[i] = sc.nextInt();
			c[i] = sc.nextInt();
			a[i] = sc.nextInt();
			b[i] = sc.nextInt();
		}
		for(int j = 0 ; j < t ; j++)
		{
			for(int k = 0 ; k < (r[j]*(a[j]+1)+1) ; k++)
			{
				for(int l = 0 ; l < (c[j]*(b[j]+1)+1) ; l++)
				{
					if((k%(a[j]+1)) == 0 || (l%(b[j]+1)) == 0)
						System.out.print("*");
					else
						System.out.print(".");
				}
				System.out.println();
			}
			System.out.println();
		}
	}

}
