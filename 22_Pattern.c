import java.util.*;

public class Intro {
	public static void main(String[] args) {
		int rows = 5;
		int cols = 9;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				// handling the last row 
				if(i == (rows-1)) System.out.print("*");
				else if(j == (rows-1-i) || j == (rows-1+i)) System.out.print("*");
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

// output 
    *    
   * *   
  *   *  
 *     * 
*********
