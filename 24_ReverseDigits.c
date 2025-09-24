#include <stdio.h>

int reverseNumberMethod01(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num%10; // to get the last digit 
        num/=10;
    }
    return rev;
}

int reverseUsingRecursion(int n1 , int *rev , int *basePosition) {
    if(n1 > 0) {
        reverseUsingRecursion(n1/10 , rev , basePosition);
        *rev = *rev + (n1%10) * (*basePosition);
        *basePosition *= 10;
    }
}

int main() {
    int n = 12567;
    
    // iterative approach to reverse the number 
    int revNumber = reverseNumberMethod01(n);
    printf("The reverse number is %d" , revNumber);
    printf("\n");
    
    // reverse anumber using the recustion approach
    int n1 = 4567;
    int rev = 0;
    int basePosition = 1;
    int revUsingRec = reverseUsingRecursion(n1 , &rev , &basePosition);
    printf("The reverse number is %d" , rev);

    return 0;
}
