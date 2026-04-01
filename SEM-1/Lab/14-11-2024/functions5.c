//Find the factorial//
#include<stdio.h>

int factorial(int n)
{
 if(n<=1)
 {
  return 1;
 }
   return n*factorial(n-1);
}
int main ()
{
  int a;
  printf("Enter a number:");
  scanf("%d", &a);
  
  printf("Factorial of %d is %d \n", a, factorial (a));
  
return 0;
}
