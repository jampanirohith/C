//8. Sum of Even and Odd Elements: Write a program that calculates and prints the sum of even and odd elements in an integer array of size 10.//

#include <stdio.h>

int main() {
    int arr[10];
    int evenSum = 0, oddSum = 0;
    int i;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) 
    {
        if(arr[i] % 2 == 0) 
        {
            evenSum += arr[i];  
        } else 
        {
            oddSum += arr[i];  
        }
    }


    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);

    return 0;
}

