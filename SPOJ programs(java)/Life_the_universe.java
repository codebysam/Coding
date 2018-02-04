import java.util.Scanner;


public class Life_the_universe {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		int n[] = new int[100];
		int i;
		n[0] = sc.nextInt();
		for(i = 1; i<100 ; i++)
		{
			n[i] = sc.nextInt();
			if(n[i-1] == 42)
				break;
		}
		
		for(int j = 0; j<= (i-2) ; j++)
		{
			System.out.println(n[j]);
		}

	}

}
