//16. Matrix Identity Check: Write a program to check if a given 3 × 3 matrix is an identity matrix. Display a message indicating whether it is an identity matrix or not.//
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int isIdentity = 1;  // Assume it is an identity matrix unless proven otherwise

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
            if(i == j) 
            {
                if(matrix[i][j] != 1) 
                {
                    isIdentity = 0;
                    break;
                }
            } 
            else 
            {
                if(matrix[i][j] != 0) 
                {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if(isIdentity == 0) break;
    }


    if(isIdentity)
        printf("The matrix is an identity matrix.\n");
    else
        printf("The matrix is not an identity matrix.\n");

    return 0;
}

