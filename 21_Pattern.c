#include <stdio.h>

int main() {
   int rows = 10;
   int cols = 9;
   
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           if(i < (rows/2)) {
               if(j >= i && j <= (cols-1-i)) printf("*");
               else printf(" ");
           }
           else {
               int k = i - (rows/2); // 1
               if(j >= 4-k && j <= 4+k) printf("*");
               else printf(" ");
               
           }
    
       }
       printf("\n");
   }

    return 0;
}

// output 

*********
 ******* 
  *****  
   ***   
    *    
    *    
   ***   
  *****  
 ******* 
*********
