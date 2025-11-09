import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 5;
        int cols = 9;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                // 0 - 0 1 2 3 4 5 6 7 8
                // 1 -   1 2 3 4 5 6 7
                // 2 -     2 3 4 5 6
                // 3 -       3 4 5
                // 4 -         4
                if(j >= i && j <= (cols-1)-i) System.out.print("*");
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
}

*********
 ******* 
  *****  
   ***   
    *  
