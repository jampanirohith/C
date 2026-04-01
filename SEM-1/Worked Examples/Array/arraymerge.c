//10. Merge Two Arrays: Write a program to merge two integer arrays of sizes 5 and 6 into a new array and display the merged array.//

#include <stdio.h>

int main() {
    int arr1[5], arr2[6];  
    int merged[11];
    int i, j;

    printf("Enter 5 integers for the first array:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 6 integers for the second array:\n");
    for(i = 0; i < 6; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++) 
    {
        merged[i] = arr1[i];
    }

    for(i = 0; i < 6; i++) 
    {
        merged[5 + i] = arr2[i];
    }


    printf("Merged array:\n");
    for(i = 0; i < 11; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

