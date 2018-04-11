import java.util.Scanner;


public class Divisibilty {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int x[] = new int[t];
		int y[] = new int[t];
		int n[] = new int[t];
		for(int i = 0 ; i < t ; i++)
		{
			n[i] = sc.nextInt();
			x[i] = sc.nextInt();
			y[i] = sc.nextInt();
		}
		for(int j = 0 ; j < t ; j++)
		{
			for(int k = x[j] ; k < n[j] ; k = k + x[j])
			{
				if(k%y[j] != 0)
					System.out.print(k+" ");
			}
			System.out.println();
		}
	}

}
