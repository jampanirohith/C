//Find the number is even or odd//
#include<stdio.h>

void chk(int a)
{
 if(a%2==0)
 {
  printf("Given number is even\n");
 }
 else
 {
 printf("Given number is odd\n");
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
