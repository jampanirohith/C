//Make a table by taking input from the user//
#include<stdio.h>
int main ()
{
int arr[2][3];
int i, j;

//printf("Enter the elements:");//
for (i=0; i<2; i++)
{
	for (j=0; j<3; j++)
	{
	printf("Enter element:"); //Using this shows message for every element input//
	scanf("%d", &arr[i][j]);
	}
}

printf("Array:\n");
for (i=0; i<2; i++)
{
	for (j=0; j<3; j++)
	{
	printf("%d\t", arr[i][j]);
	}
printf("\n");
}
return 0;
}
