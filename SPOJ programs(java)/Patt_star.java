import java.util.Scanner;


public class Patt_star {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the number");
		int n = sc.nextInt();
		int a= 1;
		int p =n-1;
		int m =0;
		int z = n;
		
		while(z!=0){
			while(p != m){
				System.out.print(" ");
				p--;
			}
			 p = n-1;
			 m++;
			 int i = 0;
			 while(i != a){
				 System.out.print("*");
				 i++;
			 }
			 System.out.println();
			 a = a+2;
			 z--;
		}

	}

}
