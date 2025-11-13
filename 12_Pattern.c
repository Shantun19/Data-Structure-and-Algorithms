public class Intro {
	public static void main(String[] args) {
		int rows = 5;
		int cols = 5;
		
		for(int i=0; i<rows; i++) {
			char ch = 'A';
			for(int j=0; j<cols; j++) {
				if(j <= 4-i) System.out.print(ch++);
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}
/*
0 - 0 1 2 3 4
1 - 0 1 2 3
2 - 0 1 2
3 - 0 1
4 - 0
*/
