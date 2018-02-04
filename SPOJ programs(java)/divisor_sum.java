import java.util.Scanner;


public class divisor_sum {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n[] = new int[t];
		int sum,r ;
		for(int i = 0; i < t ; i++)
		{
			n[i]= sc.nextInt();
		}
		for(int i = 0; i < t ; i++)
		{
			r = (int)Math.sqrt(n[i]);
			sum = 1;
			for(int j = 2; j <= r ; j++)
			{
				if(n[i]%j==0)
				{
					if(n[i]/j==j)
					{
						sum = sum + j;
					}
					else
					{
						sum = sum + j + n[i]/j;
					}
					
				}
			}
			System.out.println(sum);
		}
		

	}

}
