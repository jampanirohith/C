//7. Duplicate Elements: Write a program to find and display any duplicate elements in a given integer array.//

#include <stdio.h>

int main() 
{
    int arr[10];
    int i, j;
    int foundDuplicate = 0;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");
    for(i = 0; i < 10; i++) 
    {
        for(j = i + 1; j < 10; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                printf("%d ", arr[i]);
                foundDuplicate = 1;
                break;
            }
        }
    }

    if (!foundDuplicate) 
    {
        printf("No duplicates found.");
    }

    printf("\n");

    return 0;
}

