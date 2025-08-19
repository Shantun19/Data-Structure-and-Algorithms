#include <stdio.h>

int main() {
    int row = 10;
    int col = 9;
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            // first half rows 
            if(i < row/2) {
                // print the first half pattern 
                if(j >= 4-i && j <= 4+i) printf("*");
                else printf(" ");
            }
            else {
                int k = i - 5; // 0 
                if(j >= k && j <= 8-k) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    * 
