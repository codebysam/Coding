import java.util.Scanner;
public class fun_with_seq2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int s1[] = new int[n];
		for(int i = 0; i < n ; i++)
			s1[i] = sc.nextInt();
		
		int m = sc.nextInt();
		int s2[] = new int[m];
		for(int j = 0; j < m ; j++)
			s2[j] = sc.nextInt();
		
		for(int i = 0 ; i < n ; i++)
		{
			int flag = 0;
			for(int j = 0 ; j < m ; j++)
			{
				if(s1[i]==s2[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				System.out.println(s1[i]);
		}

	}

}
