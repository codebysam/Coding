import java.util.Scanner;


public class half_of_half {

	public static void main(String[] args) {
	

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		String s[] = new String[t];
		for(int i = 0 ; i < t ; i++)
		{
			 s[i] = sc.next();
		}
		for(int i = 0 ; i < t ; i++)
		{	
			for(int l = 0 ; l < s[i].length()/2 ;l+=2 )
			{
				System.out.print(s[i].charAt(l));
			}
			System.out.println();
		}
		
	

	}

}
