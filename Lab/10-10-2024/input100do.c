//Get input from the user and see until the input is 100 with do loop
#include<stdio.h>
int main()
{
int i;

do{
printf("Enter the number:%d\n", i );
scanf("%d", &i);
}
while(i!=100);
{
printf("The number is 100\n");
}
return 0;
}
