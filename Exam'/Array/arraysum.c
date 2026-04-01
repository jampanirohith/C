//2. Array Sum Calculation: Write a program that takes an integer array of size 10, containing values entered by the user. Calculate and print the sum of all elements in the array.//

#include<stdio.h>
int main()
{
int arr[10];
int sum=0, i;
for(i=0; i<10; i++)
{
scanf("%d", &arr[i]);
}
for(i=0; i<10; i++)
{
printf("%d\n", arr[i]);
sum += arr[i];
}
printf("\nSum=%d\n", sum);
return 0;
}
