//15. Sum of Diagonal Elements: Write a program to calculate and display the sum of the main diagonal elements of a 4 × 4 matrix.//
#include <stdio.h>

int main() {
    int matrix[4][4], sum = 0;
    int i;

    printf("Enter 16 integers for the 4x4 matrix:\n");
    for(i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < 4; i++) 
    {
        sum += matrix[i][i];  
    }

    printf("Sum of Diagonal Elements: %d\n", sum);

    return 0;
}

