
public class JavaSubstringComparison {
    
 private static boolean isLexoGraphicallyGreater(String aValue,String bValue){
            int charCodeOfaValue;
            int charCodeOfbValue;
            
            for(int index=0;index < aValue.length();index++){
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

public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        for(int i=0;i<s.length()-(k-1);i++){
            String newSubStr = s.substring(i,i+k);
            if(largest == ""){
                largest = newSubStr;
            }
            if(smallest == ""){
                smallest = newSubStr;
            }
            else{
                boolean isGreater = JavaSubstringComparison.isLexoGraphicallyGreater(newSubStr,largest);
                boolean isSmaller = JavaSubstringComparison.isLexoGraphicallyGreater(newSubStr,smallest);
                
                if(isGreater){
                    largest = newSubStr;
                }
                if(!isSmaller){
                    smallest = newSubStr;
                }
            }
        }
        return smallest + "\n" + largest;
    }
}
