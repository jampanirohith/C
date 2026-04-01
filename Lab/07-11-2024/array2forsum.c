//Take input from the user and find their sum, max, min using array and for loop//
#include<stdio.h>
int main()

{
     int num[10], i, sum=i+i, max, min;
  

     for (int i=0; i<10; i++)
{
  printf("Input: a[%d]:", i);
  scanf("%d", &num[i]);
  sum = sum + num[i];
}

 max=num[0], min=num[0];
for (int i=0; i<10; i++)

{

if (num[i]>max)
	{	
	max=num[i];
	}

if (num[i]<min)
	{
	min=num[i];
	}
}
 
printf("Sum=%d\n", sum);
printf("Maximum= %d\n", max);
printf("Minimum= %d\n", min);
return 0;
}
