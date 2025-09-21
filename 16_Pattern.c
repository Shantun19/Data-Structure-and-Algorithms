#include <stdio.h>

int main() {
    int rows = 10;
    int cols = 10;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i < rows/2) {
                if(j <= 4-i || j > 4+i) printf("*");
                else printf(" ");
            }
            else { // i = 5
                int k = i - (rows/2); // 5 - 5 = 0
                if(j <= k || j >= 9-k) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}
// output 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
