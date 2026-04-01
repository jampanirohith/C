//Make a table //
#include<stdio.h>
int main ()
{
int arr[2][3] = {{1,4,2}, {3,6,8}};
int i, j;

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
