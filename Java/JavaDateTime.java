import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.time.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        in.close();

        DateFormatSymbols dfs = new DateFormatSymbols(Locale.US);
        String weekdays[] = dfs.getWeekdays();

        Calendar cal = new GregorianCalendar(Locale.US);
        cal.set(Integer.parseInt(year), Integer.parseInt(month)-1, Integer.parseInt(day));

        System.out.println(weekdays[cal.get(Calendar.DAY_OF_WEEK)].toUpperCase());
    }
}
