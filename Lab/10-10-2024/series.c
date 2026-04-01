//Sum of 100 natura; numbers
#include<stdio.h>
int main()
{
int i, sum=0;

printf("Enter a number= %d", i);
scanf("%d", &i);
while(i<100)
{
sum += i;
i++;
}
printf("%d\n", sum);
return 0;
}
