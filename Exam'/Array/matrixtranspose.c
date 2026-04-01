//14. Transpose of a Matrix: Write a program to find the transpose of a 3 × 3 matrix. Display both the original and the transposed matrices.//
#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];
    int i, j;

    printf("Enter 9 integers for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            transpose[i][j] = matrix[j][i];  
        }
    }

    printf("Original Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("Transpose of Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
