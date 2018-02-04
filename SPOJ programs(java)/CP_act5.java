import java.util.Scanner;


public class CP_act5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a,b;
		int t = sc.nextInt();
		int r[] = new int[t];
		int c[] = new int[t];
		int n[] = new int[t];
		for(int p = 0 ; p < t ; p++)
		{
			r[p] = sc.nextInt();
			c[p] = sc.nextInt();
			n[p] = sc.nextInt() + 1;
		}
		for(int q = 0; q< t ; q++)
		{
			int x = r[q] * n[q];
			int y = c[q] * n[q];
			for(int i = 0 ; i <= x ; i++)
			{
				for(int j = 0 ; j <= y ; j++)
				{
					if(((i % n[q]) == 0) || ((j % n[q]) == 0))
						System.out.print("*");
					else
					{
						if((i+j) % (2*n[q]) == (2*(i%n[q])))
							System.out.print("\\");
						else
							if((i+j)%(2*n[q]) == 0)
								System.out.print("/");
							else 
								System.out.print(".");
					}
				}
				System.out.println();
			}
			System.out.println();
		}
	}

}
