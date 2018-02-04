import java.util.Scanner;


public class substring {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int l;
		for(int i = 0; i < 24; i++)
		{
			String s = sc.nextLine();
			
			
			int a1=0;
			l = s.length();
			for(int j = 0; j < l ; j++)
			{
				if(s.charAt(j) == ' ')
				{
					a1 = j-1;
					break;
				}
			}
			int a2 = a1+2;
			int flag=1;
			for(int x = 0 ; x <= ((a1+1)-(l-a2)) ; x++)
			{
				flag = 1;
				for(int y = 0 ; y <= (l-a2-1) ; y++)
				{
					if(s.charAt(x+y) != s.charAt(a2+y))
					{
						flag = 0;
						break;
					}
					
				}
				if (flag == 1)
				{
					break;
				}
			}
			System.out.println(flag);
			
		}
		

	}

}
