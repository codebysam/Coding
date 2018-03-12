import java.util.Scanner;
import java.math.BigInteger;
public class fun_with_seq_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int j = 1;j <= t; j++)
		{
		BigInteger n =  sc.nextBigInteger();
		BigInteger m = sc.nextBigInteger();
		m = m.multiply(n);
		System.out.println(m);
		}
		
	}
