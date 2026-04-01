//1. Basic Initialization: Write a program to create an integer array of size 5. Initialize it with values {2, 4, 6, 8, 10} and display each element along with its index.//

#include<stdio.h>

int main()
{
int arr[5]={2, 4, 6, 8, 10};
printf("Array elements are:\n");
for(int i=0; i<5; i++)
{
printf("arr[%d]=%d\n", i, arr[i]);
}
return 0;
}
