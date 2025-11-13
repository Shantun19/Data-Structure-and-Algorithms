public class Intro {
	public static void main(String[] args) {
		int rows = 5;
		int cols = 5;
		char ch = 64;
		
		for(int i=0; i<rows; i++) {
			ch++;
			for(int j=0; j<cols; j++) {
				if(j <= i) System.out.print(ch);
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

/*
A     
B B    
C C C   
D D D D  
E E E E E
*/
