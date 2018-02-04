import java.util.Scanner;


public class CP_act1 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int r[] = new int[t];
		int c[] = new int[t];
		for(int i = 0 ; i < t ; i++)
		{
			r[i] = sc.nextInt();
			c[i] = sc.nextInt();
		}
		for(int m = 0 ; m<t ; m++)
		{
			for(int j = 0 ; j < r[m] ; j++)
			{
				for(int k = 0 ; k < c[m] ; k++)
				{
					if((j+k) % 2 == 0)
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
