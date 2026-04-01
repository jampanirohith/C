//Find the average of three numbers using functions//
#include<stdio.h>

int avg(int a, int b, int c)
{
 	return (a+b+c)/3; 
}
int main ()
{
   int a, b, c;
	printf("Enter three numbers:");
	scanf("%d%d%d", &a, &b, &c);
	c=avg(a,b,c);
	printf("Average=%d\n", c);
return 0;
}
