public class Introduction {
	public static void main(String[] args) {
		// sum of a Natural Numbers 
		int num = 5;
		calculateNaturalSum(num);
		
		// calculate the Natural sum using the recursion
		System.out.print("The Natural Sum is using recursion : " + calculateNaturalSum_usingRecursion(num));
		
		// calculate the sum of a natural number using the mathematics formaul
		naturalSumUsingFormula(num);
	}
	
	/* the time complexity for this method would be O(n) */
	public static void calculateNaturalSum(int num) {
		int sum = 0;
		for(int i=0; i<=num; i++) {
			sum += i;
		}
		System.out.print("The Natural Sum is : " + sum);
	}
	
	/* calculate natural sum using the recursion */
	public static int calculateNaturalSum_usingRecursion(int num) {
		if(num == 0) return num;
		return num + calculateNaturalSum_usingRecursion(num-1);
		
	}
	
	/* calculate natural sum using the maths formula */
	public static void naturalSumUsingFormula(int num) {
		// formula = (n * (n+1))/2
		System.out.print("The Natural Sum using formula: " + ((num * (num+1))/2));
	}
}
