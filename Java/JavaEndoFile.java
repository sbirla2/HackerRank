import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
      boolean value = true;
      int i=1;
      Scanner scan = new Scanner(System.in);
      while(value){
        String input = scan.nextLine();
        System.out.println(i + " " + input);
        value = scan.hasNext();
          i+=1;
      }
    }
}
