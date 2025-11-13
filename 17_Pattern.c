public class Intro {
	public static void main(String[] args) {
		int rows = 10;
		int cols = 10;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				if(i < rows/2) {
					if(j <= i || j >= 9-i) System.out.print("*");
					else System.out.print(" ");
				}
				else {
					if(j <= 8-i || j >= i+1) System.out.print("*");
					else System.out.print(" ");
				}
			}
			System.out.println();
		}
	}	
}

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
