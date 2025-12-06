import java.util.*;
/*
	program to swap 2 numbers
*/
public class Introduction {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		swapTwoNumberUsingThirdVariable(5 , 6);
		swapTwoNumberWithoutUsingThirdVariable(76 , 11);		
	}
	
	// swap the number with the help of third varaibles.
	public static void swapTwoNumberUsingThirdVariable(int num01 , int num02) {
		int num03;
		System.out.println("before swapping : " + num01 + " " + num02);
		num03 = num01;
		num01 = num02;
		num02 = num03;
		System.out.println("after swapping : " + num01 + " " + num02);
	}
	 
	// swap 2 number using the third variable 
	public static void swapTwoNumberWithoutUsingThirdVariable(int num01 , int num02) {
		System.out.println("before swapping : " + num01 + " " + num02);
		num01 = num01 + num02;
		num02 = num01 - num02;
		num01 = num01 - num02;
		System.out.println("after swapping : " + num01 + " " + num02);
	}
}
