import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int runningSum = a + b;
            int j=2;
            for (int k=0;k<n ;k++) {
              System.out.printf(runningSum + " ");
              runningSum+=(b*j);
              j*=2;
            }
            System.out.printf("\n");
        }
        in.close();
    }
}
