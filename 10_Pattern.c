#include <stdio.h>

int main() {
    int rows = 5;
    int col = 5;
    int k = 1;
    
    for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++) {
            if(j <= i) {
                printf("%d " , k);
                k++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// output 
1     
2 3    
4 5 6   
7 8 9 10  
11 12 13 14 15 
