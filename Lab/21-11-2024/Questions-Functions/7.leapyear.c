// Write a function that checks if a given year is a leap year//
#include <stdio.h>
int check(int n)
{
 if (n%4==0)
  {
  printf("%d  is a leap year\n",n);
  } 
else
  {
  printf("%d is not a leap year\n",n);
  } 
return 0;
}
 
int main()
{
 int a;
 printf("Enter year:");
 scanf("%d",&a);
 check(a);
 return 0;
}
