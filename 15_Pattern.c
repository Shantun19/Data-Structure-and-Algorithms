public class Intro {
	public static void main(String[] args) {
		// define the rows of the grid
		int rows = 5;
		// define the columns of the grid.
		int cols = 5;
		
		// traverse through the each row and column
		for(int i=0; i<rows; i++) {
			// getting character value based on the index 
			char ch = (char) ('E' - i); // starting character for each row
			for(int j=0; j<cols; j++) {
				if(j <= i) {
					System.out.print(ch++);
				}
				
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

/*
E    
DE   
CDE  
BCDE 
ABCDE
*/
