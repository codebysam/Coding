import java.util.Scanner;


public class rectangles {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
	    
	   
	    int i,r;
	    int s = n;
	    r =(int)Math.sqrt(n);
	    for(i = 2;i<=r;i++)
	    {
	        s = s + (n/i-(i-1));
	    }
	   System.out.println(s);

	}

}
