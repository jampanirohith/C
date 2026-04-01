//Find the sum of two numbers using functions//
#include<stdio.h>

int sum(int a, int b)
{
 	return (a+b); 
}
int main ()
{
   int a, b, c;
	printf("Enter two numbers:");
	scanf("%d%d", &a, &b);
	c=sum(a,b);
	printf("Sum=%d\n", c);
return 0;
}
