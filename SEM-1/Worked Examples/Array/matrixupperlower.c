//18. Upper and Lower Triangular Matrix: Write a program to take a 3 × 3 matrix as input and display its upper and lower triangular matrices separately.//

#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    printf("Enter 9 integers for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            if(i <= j) 
            {
                printf("%d ", matrix[i][j]);
            } else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("Lower Triangular Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            if(i >= j) 
            {
                printf("%d ", matrix[i][j]);
            } 
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
