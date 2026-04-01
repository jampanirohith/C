//Find the number is positive, negative  or zero//
#include<stdio.h>

void chk(int a)
{
 if(a>0)
 {
  printf("Given number is positive\n");
 }
 else if (a<0)
 {
 printf("Given number is negative\n");
 }
 else
 {
 printf("Given number is zero\n");
 }
}
int main ()
{
   int x;
	printf("Enter a numbers:");
	scanf("%d", &x);
	chk(x);
return 0;
}
