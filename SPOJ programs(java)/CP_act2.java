import java.util.Scanner;


public class CP_act2 {
	
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
		for(int j = 0 ; j < t ; j++ )
		{
			for(int k = 1 ; k <= r[j] ; k++)
			{
				for(int l = 1 ; l <= c[j] ; l++)
				{
					if((k == 1) || (l == 1) || (k == r[j]) || (l == c[j]))
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
