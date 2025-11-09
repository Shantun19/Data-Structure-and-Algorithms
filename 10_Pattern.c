import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 5;
        int cols = 6;
        int k = 1;
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
               if(j <= i) System.out.print(k++ + " ");
               else System.out.print(" ");
            }
            System.out.println();
        }
    }
}

// output 
1     
2 3    
4 5 6   
7 8 9 10  
11 12 13 14 15 
