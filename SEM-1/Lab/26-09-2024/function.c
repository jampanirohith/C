//Programme in C to perform arithemitic operations
#include<stdio.h>
int main()
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d%d",  &num1, &num2);
printf("Given two numbers = %d,%d\n", num1, num2);
printf("Sum = %d\n", num1+num2);
printf("Difference = %d\n", num1-num2);
printf("Multiply = %d\n", num1*num2);
printf("Divided = %d\n", num1/num2);
printf("Modulo = %d\n", num1%num2);

return 0;
}
