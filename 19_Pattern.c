#include <stdio.h>
#include <math.h>

int main() {
    int rows = 7;
    int cols = 7;
    int element = 4;
    
    int findMin(int a , int b) {
        if(a < b) return a;
        return b;
    }
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            // get the closest distance from the left and top edge
            int closestFromLeftAndTop = findMin(i , j);
            int closestFromRightAndBottom = findMin((rows-1-i) , (cols-1-j));
            int resultantDistance = findMin(closestFromLeftAndTop , closestFromRightAndBottom);
            printf("%d" , element - resultantDistance);
        }
        printf("\n");
    }
}


// output 
4444444
4333334
4322234
4321234
4322234
4333334
4444444

