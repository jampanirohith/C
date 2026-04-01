//Display the following numbers on screen using array {3, 5, 6, 9, 8, 10, 100, -3, 0, 1} using for loop//

#include<stdio.h>
int main()


{
     int num[10]={3, 5, 6, 9, 8, 10, 100, -3, 0, 1}, i;
printf("Array elements are:\n");
     for (int i=0; i<10; i++)
{
	printf("num[%d]=%d\n", i, num[i]);
}

return 0;
}
