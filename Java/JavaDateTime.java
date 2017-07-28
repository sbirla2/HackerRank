import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String inputDate = in.nextLine();
        inputDate.replaceAll("","/");

        DateFormat formatter = new SimpleDateFormat("MM/dd/yy");
        Date ipdate = formatter.parse(inputDate);

        SimpleDateFormat dateObj = new SimpleDateFormat("EEEE"); // the day of the week spelled out completely
        System.out.println(dateObj.format(ipdate));
    }
}
