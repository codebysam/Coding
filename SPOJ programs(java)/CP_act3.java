import java.util.Scanner;


public class CP_act3 {

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
		for(int j = 0 ; j < t ; j++)
		{
			for(int k = 0 ; k < (r[j]*3+1) ; k++)
			{
				for(int l = 0 ; l < (c[j]*3+1) ; l++)
				{
					if((k%3) == 0 || (l%3) == 0)
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
