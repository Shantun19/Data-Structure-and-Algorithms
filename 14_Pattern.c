public class Intro {
	public static void main(String[] args) {
		int rows = 4;
		int cols = 7;
		
		for(int i=0; i<rows; i++) {
			char ch = 'A';
			for(int j=0; j<cols; j++) {
				if(j >= 3-i && j <= 3+i) {
					System.out.print(ch);
					if(i != 0) {
						if(j < (cols/2)) ch++;
						else ch--;
					}
				}
				else System.out.print(" ");
			}
			System.out.println();
		}
	}	
}

/*
   A   
  ABA  
 ABCBA 
ABCDCBA

0 -    4
1 -   345
2 -  12345
3 - 0123456
*/
