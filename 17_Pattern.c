#include <stdio.h>

int main() {
    int rows = 9;
    int cols = 10;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j < (cols/2)) {
                if(i <= (rows/2)) {
                    if(j <= i) printf("*");
                    else printf(" ");
                }
                else {
                    int k = i - (rows/2);
                    if(j < 5-k) printf("*");
                    else printf(" ");
                }
            }
            else {
                if(i <= (rows/2)) {
                    if(j >= 9-i) printf("*");
                    else printf(" ");
                }
                else {
                    int k = i - (rows/2); // 5 - 4 = 1
                    if(j >= 5+k) printf("*");
                    else printf(" ");
                }
            }
        }
        printf("\n");
    }
}


// output 

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
