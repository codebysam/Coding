import java.util.*;
import java.lang.*;
import java.util.Scanner;
import java.math.BigInteger;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int j = 1;j <= t; j++)
		{
		BigInteger n =  sc.nextBigInteger();
		BigInteger m = n.subtract(BigInteger.ONE);
		m = m.multiply(BigInteger.valueOf(25));
		m = m.add(BigInteger.valueOf(19));
		m = m.multiply(BigInteger.valueOf(10));
		m = m.add(BigInteger.valueOf(2));
		System.out.println(m);
		}
	}
}