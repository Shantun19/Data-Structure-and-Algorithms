#include <stdio.h>
#include <string.h>
#include <math.h>

// iterative approach
int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num/=10;
    }
    return count;
}

int countDigitUsingRecursion(int num) {
    // base condition 
    if(num/10 == 0) return 1;
    return 1 + countDigitUsingRecursion(num/10);
}

int digitCountUsingLog(int num) {
    return floor(log10(num) + 1);
}

int digitCountUsingString(int num) {
    // declare a character string 
    char str[20];
    // conver the number into the string 
    sprintf(str , "%d" , num);
    // return the length of that converted string
    return strlen(str);
}

int main() {
    int num = 12345;
    
    // iterative approach
    // removing the digits from right to left
    int digitCount = countDigits(num);
    printf("the number of digits are %d in  %d" , num , digitCount);
    
    printf("\n");
    
    //recursive approach 
    int number = 5679272;
    int digitCountUsingRecursion = countDigitUsingRecursion(number);
    printf("the number of digits using recursion are %d in  %d" , number , digitCountUsingRecursion);
    
    printf("\n");
    
    //uaing the logarithmic approach 
    int number_01 = 56792;
    int digitCountUsingLogAns = digitCountUsingLog(number_01);
    printf("the number of digits using Log are %d in  %d" , number_01 , digitCountUsingLogAns);
    
    printf("\n");
    
    //uaing the String cionverting mwthod approach 
    // return the length of the string.
    int number_02 = 500679288;
    int digitCountUsingStringAns = digitCountUsingString(number_02);
    printf("the number of digits using String are %d in  %d" , number_02 , digitCountUsingStringAns);

    return 0;
}

