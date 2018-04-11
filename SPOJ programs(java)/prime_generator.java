import java.util.Scanner;


public class prime_generator {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int max = 0;
		int t= sc. nextInt();
		int n[] = new int[t];
		int m[] = new int[t];
		for(int i = 0; i < t ; i++)
		{
			m[i] = sc.nextInt();
			n[i] = sc.nextInt();
			if(max<n[i])
				max = n[i];
				
		}
		
		int p[] = new int[max];
		p[0] = 2;
		int l = 0;
		int flag;
		for(int i = 3; i <= max ; i++)
		{
			flag = 0;
			for(int j = 0 ; j <= l ; j++)
			{
				if(i % p[j] == 0)
					{flag = 1;
					break;}
			}
			if (flag == 0)
			{
				l++;
				p[l] = i;
			}
			
		}
		for(int a = 0; a< t ; a++)
		{
			for(int b = 0; b <= l ; b++)
			{
				if(p[b] >= m[a] && p[b] <= n[a])
					System.out.println(p[b]);
			}
			System.out.println();
		}
		

	}

}
