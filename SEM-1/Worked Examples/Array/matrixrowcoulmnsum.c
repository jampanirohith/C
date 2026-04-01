//17. Row-wise and Column-wise Sum of a Matrix: Write a program to calculate and display the sum of each row and each column in a 3 × 3 matrix.//
#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int rowSum[3] = {0}, colSum[3] = {0};
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
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j]; 
        }
    }

    printf("Row-wise Sum:\n");
    for(i = 0; i < 3; i++) 
    {
        printf("Row %d: %d\n", i+1, rowSum[i]);
    }

    printf("Column-wise Sum:\n");
    for(j = 0; j < 3; j++) 
    {
        printf("Column %d: %d\n", j+1, colSum[j]);
    }

    return 0;
}

