#include <stdio.h>

int main() {
   int rows = 5;
   int cols = 9;
   
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           if(i == 0 && j == (cols/2)) printf("*");
           else if(i == (rows-1)) printf("*");
           else if(j == 4-i || j ==4+i) printf("*");
           else printf(" ");
    
       }
       printf("\n");
   }

    return 0;
}

// output 
    *    
   * *   
  *   *  
 *     * 
*********
