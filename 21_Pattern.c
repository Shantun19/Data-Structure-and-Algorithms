import java.util.*;

public class Intro {
	public static void main(String[] args) {
		int rows = 10;
		int cols = 9;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				if(i < (rows/2)) {
					if(j >= i && j <= (cols-1-i)) System.out.print("*");
					else System.out.print(" ");
				}
				else {
					if(j >= (cols-i) && j <= (i - 1)) System.out.print("*");
					else System.out.print(" ");
				}
			}
			System.out.println();
		}
	}	
}

/*
0 - 0123456789
1 -  12345678
2 -   23456
3 -    345
4 -     4  

*********
 ******* 
  *****  
   ***   
    *    
    *    
   ***   
  *****  
 ******* 
*********

*/
