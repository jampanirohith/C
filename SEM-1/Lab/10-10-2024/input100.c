//Get input from the user and see until the input is 100
#include<stdio.h>
int main()
{
int i;

printf("Enter the number:%d\n", i );
scanf("%d", &i);

while(i!=100)
{
printf("The number is not 100;\n Enter a number:");
scanf("%d", &i);
}
printf("The number is 100\n");
return 0;
}
