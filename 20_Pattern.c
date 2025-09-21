#include <stdio.h>
#include <math.h>

int main() {
    int rows = 6;
    int cols = 9;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j >= i && j <= 3 + i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

// output 
****     
 ****    
  ****   
   ****  
    **** 
     ****
