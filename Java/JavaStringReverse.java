import java.io.*;
import java.util.*;

public class JavaStringReverse {
	    
public static boolean isPalindrome(String str){
	       StringBuffer revStr = new StringBuffer(str);
	        revStr.reverse();
	        return str.equals(revStr.toString());
}

public static void main(String[] args) {    
	        Scanner sc=new Scanner(System.in);
	        String A=sc.next();
	        boolean isPalin = JavaStringReverse.isPalindrome(A);
	        if(isPalin){
	            System.out.println("Yes");
	        }
	        else{
	            System.out.println("No");
	        }
	    }
}
