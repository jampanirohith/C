//Take input from the user and display the numbers on screen using for loop//

#include<stdio.h>
int main()

{
     int num[5], i;
 
     for (int i=0; i<5; i++)
{
	printf("Enter the value of a[%d]:", i);
	scanf("%d", &num[i]);
}

printf("Array elements are:\n");
     for (int i=0; i<5; i++)
{
	printf("num[%d]=%d\n", i, num[i]);
}

return 0;
}
