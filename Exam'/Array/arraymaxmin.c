//3. Find Maximum and Minimum Values: Given an array of integers, write a program to find and display the maximum and minimum values in the array.//
#include<stdio.h>
int main()
{
int arr[5];
int i;
int a, b;
for(i=0; i<5; i++)
{
scanf("%d", &arr[i]);
}
printf("Given array:\n");

for(i=0; i<5; i++)
{
printf("arr[%d]=%d\n", i, arr[i]);
}

a=b=arr[0];
for(i=0; i<5; i++)
{
while(a>arr[i])
{
a=arr[i];
}
}
for(i=0; i<5; i++)
{
while(b<arr[i])
{
b=arr[i];
}
}

printf("Maximum=%d, Minimum=%d\n", a, b);
return 0;
}
