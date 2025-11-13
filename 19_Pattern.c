import java.util.*;

public class Intro {
	public static int findMin(int leftTop , int rightBottom) {
		return (leftTop < rightBottom) ? leftTop : rightBottom;
	}
	
	public static void main(String[] args) {
		int rows = 7;
		int cols = 7;
		int element = 4;
		
		for(int i=0; i<rows; i++) {			
			for(int j=0; j<cols; j++) {
				// get the closest distance from the left and top edge
				int closetFromLeftAndTop = Math.min(i , j);
				int closetFromRightAndBottom = Math.min((rows-1-i) , (cols-1-j));
				int resultantDistance = findMin(closetFromLeftAndTop , closetFromRightAndBottom);
				System.out.print(element - resultantDistance);
			}
			System.out.println();
		}
	}	
}

/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/
