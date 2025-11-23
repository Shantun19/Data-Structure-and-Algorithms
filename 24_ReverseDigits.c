/*
	Reverse Digits 
		example : 357 - 753
		example : 100 - 001
		
		leading zero will not be considered after reversing the digits.
		
		Algorithm for reversing the digits using the while loop
			- take the user input
			- now take the number and modulo by 10 example - 456 % 10 = 6 
			- multiply the reversed number by 10 and add remainder
			- divide the number by 10
			- repeat until the number become 0
			
		Algorithm for reversing the digits using recursion
			- the final reversed value will be stored in global reverded variable.
			- if the number becomes 0 terminated the recursion, this will be the base consition.
			- take the modulo and add it with rev * 10 multiplying
			- divide the number by 10 and call the reverse function on this number 
*/

import java.util.*;

public class ReverseDigits {
	static int global_reversed = 0; // specially for recusrion
	
	public static void main(String[] args) {
		// take the user input
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		// first method to rever the number 
		reverseNumberUsingMethod01(n);
		
		// second method ro reverser the number using recursion
		int ans = reverseNumberUsingRecursion(n);
		System.out.print("The reversed number using the recursion is " + ans);
	}
	
	/* 
		reverse the number using the while loop
		the time complxity will be = O(log10) and space = O(1)
	*/
	public static void reverseNumberUsingMethod01(int n) {
		int reversed = 0;
		while(n != 0) {
			reversed = (reversed * 10) + (n % 10);
			n/=10;
		}
		System.out.println("The reversed Number is :" + reversed);
	}
	
	public static void global_reversed(int num) {
		if(num <= 0) return;
		global_reversed = (global_reversed * 10) + (num % 10);
		return global_reversed(num/10);
	}
}
