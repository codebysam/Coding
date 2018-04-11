import java.util.Scanner;
import java.math.BigInteger;
public class fun_with_seq_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int j = 1;j <= t; j++)
		{
		BigInteger n =  sc.nextBigInteger();
		BigInteger sum = BigInteger.ZERO;
		for(BigInteger i = BigInteger.ONE; i.compareTo(n)<=0;i = i.add(BigInteger.ONE))
		{ 
			sum = sum.add(sc.nextBigInteger());
		}
		BigInteger rem = sum.remainder(n);
		if(rem.compareTo(BigInteger.valueOf(0))==0)
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
		}
		
	}

}
