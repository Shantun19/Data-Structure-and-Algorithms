#include <stdio.h>

int main() {
    int row = 9;
    int col = 5;
    
    for(int i=0;i <row; i++) 
    {
        for(int j=0; j<col; j++) 
        {
            if(i <= row/2) 
            {
                if(j <= i) printf("*");
                else printf(" ");
                
            }
            else 
            {
                int k = i - 5; // 0 
                if(j < 4 - k) printf("*");
                else printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}

output 
*    
**   
***  
**** 
*****
**** 
***  
**   
*
