#include <stdio.h>

int main() {
    int row = 5;
    int col = 9;
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(j >= 4-i && j <= 4+i) printf("*");
            else printf(" ");
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
