import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JavaSubstring {
	
	private static String getSubStr(String s1,int startIndex,int endIndex) {
		return s1.substring(startIndex, endIndex);
	}
	
	public static void printStr(String str) {
		System.out.println(str);
	}
	
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int start = in.nextInt();
        int end = in.nextInt();
        String subStr = JavaSubstring.getSubStr(S, start, end);
        JavaSubstring.printStr(subStr);
    }
}