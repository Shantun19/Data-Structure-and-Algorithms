import java.util.*;

class Main {
    public static void main(String[] args) {
        int digit_01 = 5673;
        countDigitUsingIterativeMethod(digit_01);
        System.out.println();
        int digit_02 = 509235;
        int result = countDigitUsingRecursiveMethod(digit_02);
        System.out.print("the Number of digit using Recursive method is => " + result);
        System.out.println();
        int digit_03 = 50923;
        countDigitUsingLogMethod(digit_03);
        System.out.println();
        int digit_04 = 503;
        countDigitUsingStringMethod(digit_04);
    }
    
    public static void countDigitUsingIterativeMethod(int digit) {
        /* digit counter to store the count of digits */
        int digitCounter = 0;
        /* reducing the number by its last digit until it become 0 */
        while(digit != 0) {
            /* increament the counter */
            digitCounter++;
            /* reducing the digits */
            digit/=10;
        }
        System.out.print("the Number of digit using iterative method is => " + digitCounter);
    }
    
    public static int countDigitUsingRecursiveMethod(int digit) {
        /* when the digit become 0 it return the 0 */
        if (digit == 0) return 0;
        /* call the recursive  method by sending the reduced digit by 10 */
        return 1 + countDigitUsingRecursiveMethod(digit/10);
    }
    
    public static void countDigitUsingLogMethod(int digit) {
        int result = (int) (Math.log10(digit)) + 1;
        System.out.print("the Number of digit using Math.Log method is => " + result);
    }
    
    public static void countDigitUsingStringMethod(int digit) {
        int len = String.valueOf(Math.abs(digit)).length();
        System.out.print("the Number of digit using String method is => " + len);
        
    }
}
