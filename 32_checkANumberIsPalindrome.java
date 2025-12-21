import java.util.*;

class Main {
    public static int globallyReverseNumber = 0;
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        reverseTheNumber(n);
        String res = (n == globallyReverseNumber) ? "Palindrome Number" : "Not a plaindrome";
        System.out.println(res);
    }
    
    public static void reverseTheNumber(int n) {
        // base condition
        if(n <= 0) return;
        globallyReverseNumber = (globallyReverseNumber * 10) + (n%10);
        n/=10;
        reverseTheNumber(n);
    }
}
