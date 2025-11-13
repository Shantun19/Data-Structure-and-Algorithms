import java.util.*;

public class Intro {
	public static void main(String[] args) {
		int rows = 6;
		int cols = 9;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				if(j >= i && j <= 3 + i) System.out.print("*");
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

/*

****     
 ****    
  ****   
   ****  
    **** 
     ****
	 

*/
