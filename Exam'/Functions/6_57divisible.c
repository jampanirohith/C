// Write a function that checks if a given number is divisible by both 5 and 7//
#include <stdio.h>
int check(int n)
{
 if (n%5==0&&n%7==0)
  {
  printf("%d is divisible by 5 and 7\n",n);
  } 
else
  {
  printf("%d is either not divisible by 5 or 7\n",n);
  } 
  
return 0;
}
 
int main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);
 check(a);
 return 0;
}
