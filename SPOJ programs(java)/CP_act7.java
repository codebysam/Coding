import java.util.Scanner;


public class CP_act7 {

	public static void main(String[] args) {

		
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int f,p,x,y;
		int r[] = new int[t];
		int c[] = new int[t];
		int n[] = new int[t];
		for(int i = 0 ; i < t ; i++)
		{
			r[i] = sc.nextInt();
			c[i] = sc.nextInt();
			n[i] = sc.nextInt();
		}
		
		for(int i = 0 ; i < t ; i++)
		{
			p = n[i]*2;
			x = (r[i]*p);
			y = (c[i]*p);
			for(int j = 0 ; j < x ; j++)
			{
				for(int k = 0 ; k < y ; k++)
				{
					
					if( (j+k) % p == n[i]-1)
						System.out.print("/");
					else
						if(k%p == (n[i]+(j%p)) || k%p == ((j%p)-n[i]))
							System.out.print("\\");
						else
							System.out.print(".");
				}
				System.out.println();
			}
			System.out.println();
		}

	}

}
