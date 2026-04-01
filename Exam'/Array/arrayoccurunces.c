// 5. Count Occurrences: Write a program to create an integer array and ask the user to enter a number to count how many times it appears in the array.//

#include <stdio.h>

int main() {
    int arr[10];
    int i, number, count = 0;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to count its occurrences: ");
    scanf("%d", &number);

    for(i = 0; i < 10; i++) 
    {
        if(arr[i] == number) 
        {
            count++;
        }
    }

    printf("The number %d appears %d time(s) in the array.\n", number, count);

    return 0;
}

