#include <stdio.h>

int main() {
    int rows = 5;
    int col = 5;
    
    for(int i=0; i<rows; i++) {
        // define a character 
        char ch = 'A';
        
        for(int j=0; j<col; j++) {
            if(j <= 4 - i) {
                printf("%c " , ch);
                ch++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// output 
A B C D E 
A B C D  
A B C   
A B    
A
