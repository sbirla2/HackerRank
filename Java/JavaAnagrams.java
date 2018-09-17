
public class JavaAnagrams {

    public static int getCharIndex(char[] alphabetArray,char letter){
        int charIndex = -1;
        for(int index=0;index < alphabetArray.length;index++){
            if(alphabetArray[index] == letter){
                charIndex = index;
                break;
            }
        }
        return charIndex;
    }

    
public static char[] getAlphabetArray(){
        char charVal = 'a';
        int charCode = (int)charVal;
        int alphabetArrayLen= 26;
        char[] alphabetArray=new char[26];
        
        for(int index = 0; index < alphabetArrayLen; index++){
            alphabetArray[index] = charVal;
            charCode++;
            charVal = (char)charCode;
        }
        return alphabetArray;
    }

public static int[] getRefrenceArray(){
    int[] refrenceArray = new int[26];
    int alphabetArrayLen= 26;
    for(int index = 0; index < alphabetArrayLen; index++){
          refrenceArray[index] = 0;
    }
    return refrenceArray;
}

public static boolean isRefrenceSame(int[] refA, int[] refB){
    for(int i=0;i<refA.length;i++){
        if(refA[i] != refB[i]){
            return false;
        }
    }
    return true;
}

static boolean isAnagram(String a, String b) {
    String str1 = a.toLowerCase();
    String str2 = b.toLowerCase();
        
    char[] charArrayA = JavaAnagrams.getAlphabetArray();
    int[] refArrayA = JavaAnagrams.getRefrenceArray();
    
    char[] charArrayB = JavaAnagrams.getAlphabetArray();
    int[] refArrayB = JavaAnagrams.getRefrenceArray();
    
    for(int i=0;i<str1.length();i++){
        char charAtIndex = str1.charAt(i);
        int charIndex = JavaAnagrams.getCharIndex(charArrayA,charAtIndex);
        refArrayA[charIndex] +=1;
    }
    
    for(int i=0;i<str2.length();i++){
        char charAtIndex = str2.charAt(i);
        int charIndex = JavaAnagrams.getCharIndex(charArrayB,charAtIndex);
        refArrayB[charIndex] +=1;
    }
    
    boolean isAnagram = JavaAnagrams.isRefrenceSame(refArrayA,refArrayB);
    return isAnagram;
}
}
