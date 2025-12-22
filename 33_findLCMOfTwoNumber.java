import java.util.*;

/*
    a * b = hcf * lcm
    hcf = (a*b)/lcm
    lcm = (a*b)/hcf
*/

public class Main
{
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        int lcm_01 = findLCM(a , b);
        System.out.println("The lcm is : " + lcm_01);
        
        // Mathematical way to find the hcf/gcd of two numbers
        int hcf = (a*b)/lcm_01;
        System.out.println("The hcf is : " + hcf);
    }
    
    // Navive Approach to find the lcm of a 2 numbers
    public static int findLCM(int a , int b) {
        for(int i=1; i<Math.min(a , b); i++) {
            int currentMultiple = (a * i);
            if((currentMultiple%b == 0)) return currentMultiple;
        }
        return -1;
    }
}
