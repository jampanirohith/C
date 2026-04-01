//6. Sorting an Array: Write a program to sort an array of 10 integers in ascending order and display the sorted array.//

#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10 - 1; i++) 
    {
        for(j = 0; j < 10 - 1 - i; j++) 
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

