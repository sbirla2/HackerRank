import java.util.Scanner;
import java.util.regex.*;
import java.util.regex.PatternSyntaxException;

public class Solution
{
    public static boolean isRegexValid(String regExVal) {
        try{
            Pattern regExPatt = Pattern.compile(regExVal);
            return true;
        }
        catch(PatternSyntaxException pattException){
            return false;
        }
    }
    
	public static void main(String[] args) throws PatternSyntaxException{
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		while(testCases>0){
			String pattern = in.nextLine();
          	boolean isValid = Solution.isRegexValid(pattern);
            if(isValid){
                System.out.println("Valid");
            }
            else{
                System.out.println("Invalid");
            }
		}
	}
}




