import java.util.*;

/*
    GCD 
        - gives you the largest +ve Integer that dic=vides both the Number 
        - multiples are like : 2 = 2 , 4 , 6 , 8 , 10 ........ 
        - factors means the number who divides the specific number 
            - 12 = 1 , 2 , 3 , 4 , 6 , 12 
*/

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        // calculate the gcd using the brute force approach 
        int gcd_01 = calculateGCD_01(a , b);
        System.out.println("The GCD Using method 1 is " + gcd_01);
        
        // calculate the gcd of 2 number using the euclidean subtraction algorithm.
        int gcd_02 = calculateGCD_02(a , b);
        System.out.println("The GCD Using method 2 is " + gcd_02);
        
        // calculate the gcd of 2 Number using the euclidean division algortihms.
        int gcd_03 = calculateGCD_03(a , b);
        System.out.println("The GCD Using method 3 is " + gcd_03);
        
        // calculate the gcd of 2 number using recursion 
        int gcd_04 = calculateGCD_04(a , b);
        System.out.println("The GCD Using method 4 / recursion " + gcd_04);
        
        // calculate the gcd using recursion - method 2
        int gcd_05 = calculateGCD_05(a , b);
        System.out.println("The GCD Using method 4 / recursion method 2 " + gcd_05);
    }
    
    // Naive approach to find the gcd of 2 NUmbers.
    // the time complexity would be - O(min(a,b))
    public static int calculateGCD_01(int a , int b) {
        // find the factors of both the numbers 
        int gcd = Integer.MIN_VALUE;
        for(int i=2; i<=Math.min(a , b); i++) {
            if((a%i == 0) && (b%i == 0) && i > gcd) gcd = i;
        }
        return gcd;
    }
    
    // calculate the gcd of two number using the euclidean subtraction algorithms 
    public static int calculateGCD_02(int a , int b) {
        while((a != 0 && b != 0)) {
            if(a > b) a = a - b;
            else if(b > a) b = b - a;
            else return a;
        }
        
        return (a == 0) ? b : a;
    }
    
    // calculate the gcd of 2 Number using the euclidean division algorithms
    public static int calculateGCD_03(int a , int b) {
        while((a != 0 && b != 0)) {
            if(a > b) a = a%b;
            else if(b > a) b = b%a;
        }
        
        return (a == 0) ? b : a;
    }
    
    // calculate the gcd of 2 number using the recursion 
    public static int calculateGCD_04(int a , int b) {
        // base condition 
        if(a == 0) return b;
        if(b == 0) return a;
        if(a == b) return a; // return either a or b.
        
        if(a > b) return calculateGCD_04((a - b) , b);
        else if(b > a) return calculateGCD_04(a , (b - a));
        
        return -1;
    }
    
    public static int calculateGCD_05(int a , int b) {
        if(b == 0) return a;
        return calculateGCD_05(b , a%b);
    }
}
