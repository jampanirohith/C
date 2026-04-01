//Find sum of two following interger array and display the result: a[5]={3, 5, -2, 10, 5}, b[5]={-11, 3, 6, 0, 1}//

#include<stdio.h>
int main()


{
     int a[5]={3, 5, -2, 10, 5}, b[5]={-11, 3, 6, 0, 1}, i;
printf("Output:\n");
     for (int i=0; i<5; i++)
{
	printf("a[%d] + b[%d] = %d\n", i, i, a[i]+b[i]);
}

return 0;
}
