import java.util.*;

public class Java2DArray {
    
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
        
        int largestValue = Integer.MIN_VALUE;;
        for(int rowIndex=0;rowIndex < 6;rowIndex++){
            for(int colIndex =0 ; colIndex < 6; colIndex++){
                
                if(rowIndex > 3 || colIndex > 3) continue; // To avoid index out of bounds
                
                int row1Sum = arr[rowIndex][colIndex] + arr[rowIndex][colIndex+1] + arr[rowIndex][colIndex + 2];
                int row2Sum = arr[rowIndex+1][colIndex+1];
                int row3Sum = arr[rowIndex+2][colIndex]+ arr[rowIndex+2][colIndex+1] + arr[rowIndex+2][colIndex + 2];
                
                int totalSum = row1Sum + row2Sum + row3Sum;
                
                if(totalSum > largestValue){
                    largestValue = totalSum;
                }
            }
        }
        
        System.out.println(largestValue);
        scanner.close();
    }
}
