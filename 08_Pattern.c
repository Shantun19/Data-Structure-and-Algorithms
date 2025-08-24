#include <stdio.h>

int main() {
    int row = 5;
    int col = 5;
    int k;
    
    for(int i=0;i <row; i++) 
    {
        k = (i%2 == 0) ? 1 : 0;
        for(int j=0; j<col; j++) 
        {
            if(j <= i) 
            {   
                printf("%d" , k);
                k = (k == 0) ? 1 : 0;
            }
            else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}

output 

1    
01   
101  
0101 
10101
