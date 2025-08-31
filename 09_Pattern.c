#include <stdio.h>

int main() {
    int col = 8;
    int row = 4;

    for(int i=0; i<row; i++) {
        int k = 1;
        for(int j=0; j<col; j++) {
            if(j < (col/2)) {
                if(j <= i) {
                    printf("%d" , k);
                    k++;
                }
                else printf(" ");
            }
            else {
                if(j >= (col-1)-i) {
                    k--;
                    printf("%d" , k);
                }
                else printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

output:
1      1
12    21
123  321
12344321
