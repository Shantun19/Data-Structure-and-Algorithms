import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 9;
        int cols = 5;
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(i <= (rows/2)) {
                    if(j <= i) System.out.print("*");
                    else System.out.print(" ");
                }
                else {
                    if(j <= 8-i) System.out.print("*");
                    else System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

output 
*    
**   
***  
**** 
*****
**** 
***  
**   
*
