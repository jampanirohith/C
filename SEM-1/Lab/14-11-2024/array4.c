//Make a table with custom rows and coulmn by taking input from the user and find sum//
#include<stdio.h>
int main ()
{
int arr[100][100];
int m, n, i, j, sum;

printf("Enter the size of row:");
scanf("%d",&m);
printf("Enter the size of coulmn:");
scanf("%d",&n);


for (i=0; i<m; i++)
{
	for (j=0; j<n;j++)
	{
	printf("Enter element:");
	scanf("%d", &arr[i][j]);
	}
}

printf("Array:\n");
for (i=0; i<2; i++)
{
	for (j=0; j<n; j++)
	{
	printf("%d\t", arr[i][j]);
		sum = sum+arr[i][j];
	}
printf("\n");
}

printf("Sum of elements in array: %d\n", sum);
return 0;
}
