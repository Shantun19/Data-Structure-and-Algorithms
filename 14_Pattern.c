#include <stdio.h>

int main() {
    int rows = 4;
    int col = 7;
    
    for(int i=0; i<rows; i++) {
        char ch = '@';
        for(int j=0; j<col; j++) {
            if(j <= 3+i && j >= 3-i) {
               if(j <= col/2) {
                   ch++;
                   printf("%c" , ch);
               }
               else {
                   ch--;
                   printf("%c" , ch);
               }
           }
           else printf(" ");
        }
        printf("\n");
    }
}

// output 
   A   
  ABA  
 ABCBA 
ABCDCBA
