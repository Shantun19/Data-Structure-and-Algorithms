import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 4;
        int cols = 8;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(j <= i || j >= (cols-1)-i) {
                    int k = getTheNumber(i , j , cols);
                    System.out.print(k);
                }
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
    
    public static int getTheNumber(int i , int j , int cols) { // 0 , 0 , 8
        // increament from the left side 
        if(j <= i) { // 0 <= 1
            return j+1;
        }
        else {
            // decreament from the right side 
            return cols - j; // 8 - 1 = 7
            
        }
    }
}

output:
1      1
12    21
123  321
12344321
