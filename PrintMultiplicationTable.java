import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printMultiplicationTableusingForLoop(n);
        printMultiplicationTableusingRecursion(n , 1);
    }
    
    public static void printMultiplicationTableusingForLoop(int n) {
        for(int i=1; i<=10; i++) {
            System.out.println(n + "X" + i + "=" + (n * i));
        }
    }
    
    public static void printMultiplicationTableusingRecursion(int n , int start) {
        if (start == 11) return;
        System.out.println(n + "X" + start + "=" + (n * start));
        printMultiplicationTableusingRecursion(n , start + 1);
    }
}
