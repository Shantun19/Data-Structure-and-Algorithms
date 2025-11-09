import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = 5;
        int cols = 5;
        
        for(int i=0; i<rows; i++) {
            int k = (i % 2 == 0) ? 1 : 0;
            for(int j=0; j<cols; j++) {
                if(j != 0) {
                    k = (k == 0) ? 1 : 0;
                }
                if(j <= i) System.out.print(k);
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
}

output 

1    
01   
101  
0101 
10101
