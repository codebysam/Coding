import java.util.Scanner;


public class CP_act6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int a[] = new int[t];
		int b[] = new int[t];
		int c[] = new int[t];
		int d[] = new int[t];
		int x,y;
		for(int i = 0 ; i < t ; i++)
		{
			a[i] = sc.nextInt();
			b[i] = sc.nextInt();
			c[i] = sc.nextInt();
			d[i] = sc.nextInt();
		}
		for(int j = 0 ; j < t ; j++)
		{
			x = (a[j]*c[j])+a[j]+c[j];
			y = (b[j]*d[j])+(b[j]+d[j]);
			for(int k = 1 ; k <= x ; k++)
			{
				for(int l = 1; l <= y ; l++)
				{
					if(l % (d[j]+1) == 0 && k % (c[j]+1) == 0)
						System.out.print("+");
					else
						if(l % (d[j]+1) == 0)
							System.out.print("|");
						else 
							if(k % (c[j]+1) == 0)
								System.out.print("-");
							else
								System.out.print(".");
				}
				System.out.println();
			}
			System.out.println();
		}

	}

}
