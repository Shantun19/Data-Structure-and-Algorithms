public class Intro {
	public static void main(String[] args) {
		int rows = 5;
		int cols = 5;
		
		for(int i=0; i<rows; i++) {
			char ch = 'A';
			for(int j=0; j<cols; j++) {
				if(j <= i) System.out.print(ch++);
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

/* output 
A     
A B    
A B C   
A B C D  
A B C D E
*/
