//9. Find Second Largest Element: Write a program to find and display the second largest element in a given integer array.//

#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int largest, secondLargest;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = 0;  

    for(i = 0; i < 10; i++) 
    {
        if(arr[i] > largest) 
        {
            secondLargest = largest;  
            largest = arr[i];
        } 
        else if(arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == 0) 
    {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}

