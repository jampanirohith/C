//13. Matrix Multiplication: Write a program to multiply two matrices of size 2 × 3 and 3 × 2 respectively, and display the resulting 2 × 2 matrix.//

#include <stdio.h>

int main() {
    int A[2][3], B[3][2], C[2][2]; 
    int i, j, k;

    printf("Enter 6 integers for the first 2x3 matrix (A):\n");
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter 6 integers for the second 3x2 matrix (B):\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            for(k = 0; k < 3; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];  
        }
    }

    printf("The resulting matrix after multiplication is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

