import java.util.*;
/*
	program to find the sum of square of first n natural number
*/
public class Introduction {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = calculateSumOfSquareOfFirstNaturalNumber(n);
		System.out.println("The sum is : " + sum);
		
		System.out.println();
		
		int sumUsingMathematics = calculateSumUsingFormula(n);
		System.out.println("The sum using the maths formula is: " + sumUsingMathematics);
	}
	
	/* Naive approach The idea for this naive approach is to run a loop from 1 to n and sum up all the squares. */
	public static int calculateSumOfSquareOfFirstNaturalNumber(int n) {
		int sum = 0;
		for(int i=1; i<=n; i++) {
			sum += (i * i);
		}
		return sum;
	}
	
	/*
		the sum of square of first n natural numbers is (n(n+1)(2n+1))/6
	*/
	public static int calculateSumUsingFormula(int num) {
		return ((num*(num + 1)*(2*num + 1))/6);
	}		
}

