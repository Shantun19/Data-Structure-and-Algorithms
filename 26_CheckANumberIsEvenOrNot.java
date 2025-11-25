import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        checkIsANumberIsEvenOrNot(n);
        checkNumberIsEvenOrNotUsingBitwiseOperator(n);
    }
    
    public static void checkIsANumberIsEvenOrNot(int n) {
        if(n % 2 == 0) System.out.println(n + " is a Even Number");
        else System.out.println(n + " is not a Even Number");
    }
    
    public static void checkNumberIsEvenOrNotUsingBitwiseOperator(int n) {
        /*
        The last bit of all odd numbers is always 1, while for even numbers it’s 0
        So, when performing bitwise AND operation with 1, odd numbers give 1, and even numbers give 0.
        
        Note: Bitwise operators are extremely fast and efficient because they operate directly at the binary level, making them significantly faster than arithmetic or logical operations.
        Examples:

        15  ->          1 1 1 1
                    &   0 0 0 1
                       -------
                       0 0 0 1 , so this we can say it is an odd number.

        44 ->  1 0 1 1 0 0
            &  0 0 0 0 0 1
                -----------
                0 0 0 0 0 0 , so this we can say it is an even number.
        */
        
        if((n & 1) == 0) System.out.println(n + " is a Even Number");
        else System.out.println(n + " is not a Even Number");
    }
    
    
}
