link : https://www.geeksforgeeks.org/dsa/find-number-closest-n-divisible-m/

import java.util.*;
/*
	program to find closest to n and divisible by m
	Given two integers n and m (m != 0). Find the number closest to n and divisible by m. If there is more than one such number, 
	then output the one having maximum absolute value.
*/
public class Introduction {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		findClosestUsingNaiveApproach(-15 , 6);
		findClosestUsingOptimiseApproach(13 , 4);
	}
	
	public static void findClosestUsingNaiveApproach(int n , int m) {
		int min_diff = Integer.MAX_VALUE;
		int ans = 0;
		for(int i = Math.abs(n) - m; i<= Math.abs(n) + m; i++) {
			if(i%m == 0) {
				int difference = Math.abs((Math.abs(n) - i)); // 1 
				if(difference <= min_diff) {
					ans = i; // 12 
					min_diff = difference;
				}
			}
		}
		ans = (n < 0) ? (ans * (-1)) : ans;
		System.out.println("the closet value is " + ans);
	}
	
	/*
		first find the quotient q = (n/m)
		this q and q+1 are the multiple of m, and tells the range in between that your n is present.
		n = 13 and m = 4
		then q = (13/4) = 3
		the below n closest multiple of m is n1 = (m * quotient); = 12
		the above n closest multiple of m is int n2 = m * (quotient + 1); = 16
	*/
	public static void findClosestUsingOptimiseApproach(int n , int m) {
		int quotient = (n/m);
		
		int n1 = (m * quotient);
		int n2 = m * (quotient + 1);
		
		int dist1 = Math.abs(n - n1);
		int dist2 = Math.abs(n - n2); 
		
		if(dist1 < dist2) {
			System.out.println("the closet value is " + n1);
		}
		else System.out.println("the closet value is " + n2);
	}	
}

