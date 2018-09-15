import java.io.*;
import java.util.*;

public class Solution {
 int getSmallerStringLength(String s1,String s2){
            if(s1.length() < s2.length()){
                return s1.length();
            }
            return s2.length();
        }
        
        int getSizeSum(String s1,String s2){
            return s1.length() + s2.length();
        }
        
        String getFirstLetterUpperCase(String s){
            StringBuffer mutableStr = new StringBuffer(s);
            Character firstLetter =  Character.toUpperCase(s.charAt(0));
            mutableStr.deleteCharAt(0);
            mutableStr.insert(0,firstLetter);
            return mutableStr.toString();
        }
        
        boolean isLexoGraphicallyGreater(String aValue,String bValue){
            int charCodeOfaValue;
            int charCodeOfbValue;
            int differenceValue = getSmallerStringLength(aValue,bValue);
            
            for(int index=0;index < differenceValue;index++){
                charCodeOfaValue = (int)aValue.charAt(index);
                charCodeOfbValue = (int)bValue.charAt(index);
                if(charCodeOfaValue > charCodeOfbValue){
                    return true;
                }
                else if(charCodeOfaValue < charCodeOfbValue){
                    return false;
                }
                else{
                    continue;
                }
            }
           return false; 
        }
        public static void main(String[] args) {
            
            Scanner sc=new Scanner(System.in);
            String A=sc.next();
            String B=sc.next();
            
            Solution callObj = new Solution();
            
            boolean isLexoTrue = callObj.isLexoGraphicallyGreater(A,B);
            int totalSize = callObj.getSizeSum(A,B);
            String AUpper = callObj.getFirstLetterUpperCase(A);
            String BUpper = callObj.getFirstLetterUpperCase(B);
            
            System.out.println(totalSize);
            if(isLexoTrue){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }
            System.out.println(AUpper + " " + BUpper);
}
}



