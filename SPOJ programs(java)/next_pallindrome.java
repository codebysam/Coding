import java.util.Scanner;


public class next_pallindrome {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n[] = new int[t];
		for(int i = 0; i < t ; i++)
		{
			n[i] = sc.nextInt();
		}
		
		for(int i = 0; i < t ; i++)
		{
		int num,rev = 0,rem;
		while(true)
		{
			n[i]++;
			num = n[i];
			rev = 0;
			while(num!=0)
			{
				rem = num%10;
				rev = rev*10+rem;
				num = num/10;
			}
			
			if (n[i] == rev)
			{
				System.out.println(n[i]);
				break;
			}
		
		}
		}

	}

}
