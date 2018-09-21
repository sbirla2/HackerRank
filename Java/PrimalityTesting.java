import java.math.*;
import java.util.*;

public class PrimalityTesting {
	  private static final Scanner scanner = new Scanner(System.in);

	    public static void main(String[] args) {
	        String n = scanner.nextLine();
	        BigInteger largeIntValue = new BigInteger(n);
	        boolean isProbablyPrime = largeIntValue.isProbablePrime(1);
	        if(isProbablyPrime){
	            System.out.println("prime");
	        }
	        else{
	            System.out.println("not prime");
	        }
	        scanner.close();
	    }
}
