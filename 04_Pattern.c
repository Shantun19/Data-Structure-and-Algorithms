import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 5;
        int cols = 9;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
              if(j >= (rows-1)-i && j <= (rows-1)+i) System.out.print("*");
              else System.out.print(" ");
            }
            System.out.println();
        }
    }
}

    *    
   ***   
  *****  
 ******* 
*********
