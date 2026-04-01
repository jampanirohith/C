//12. Matrix Addition: Write a program to take two 2×2 matrices as input from the user and perform matrix addition. Display the resulting matrix.//

#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j;

    printf("Enter 4 integers for the first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter 4 integers for the second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }


    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("The resulting matrix after addition is:\n");
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

