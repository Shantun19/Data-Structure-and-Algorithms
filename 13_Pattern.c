#include <stdio.h>

int main() {
    int rows = 5;
    int col = 5;
    // define a character 
    char ch = 64;
    
    for(int i=0; i<rows; i++) {
        ch++;
        for(int j=0; j<col; j++) {
            if(j <= i) {
                printf("%c " , ch);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// output 
A     
B B    
C C C   
D D D D  
E E E E E
