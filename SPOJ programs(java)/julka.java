import java.util.Scanner;
import java.math.BigInteger;
public class fun_with_seq_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		for(int j = 1;j <= 10; j++){
		BigInteger n =  sc.nextBigInteger();
		BigInteger m = sc.nextBigInteger();
		BigInteger a,b;
		a = n.add(m);
		a = a.divide(BigInteger.valueOf(2));
		b = n.subtract(a);
		System.out.println(a+"\n"+b);
		
		
		}
		
	}

}
