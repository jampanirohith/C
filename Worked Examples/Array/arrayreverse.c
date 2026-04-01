//Write a program to reverse the elements of an integer array of size 7 and display the reversed array.//

#include <stdio.h>

int main()
{
    int arr[7];
    int i, temp;

    printf("Enter 7 integers:\n");
    for(i = 0; i < 7; i++) 
    {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < 7 / 2; i++) 
    {
        temp = arr[i];
        arr[i] = arr[7 - i - 1];
        arr[7 - i - 1] = temp;
    }


    printf("Reversed array:\n");
    for(i = 0; i < 7; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
