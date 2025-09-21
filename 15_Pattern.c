#include <stdio.h>

int main() {
    int rows = 5;
    int col = 5;
    
    for(int i = 0; i < rows; i++) {
        char temp = 'E' - i;
        for(int j = 0; j < col; j++) {
            if(j <= i) {
                printf("%c", temp);
                temp++;
            }
            else printf(" ");
        }
        printf("\n");
    }
}

// output 
E    
DE   
CDE  
BCDE 
ABCDE
