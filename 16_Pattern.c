public class Intro {
	public static void main(String[] args) {
		int rows = 10;
		int cols = 10;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				if(i < rows/2) {
					if(j <= 4-i || j > 4+i) System.out.print("*");
					else System.out.print(" ");
				}
				else {
					if(j <= i - 5 || j >= 14-i) System.out.print("*");
					else System.out.print(" ");
				}
			}
			System.out.println();
		}
	}	
}

/*

**********
****  ****
***    ***
**      **
*        *

*        *
**      **
***    ***
****  ****
**********

*/
