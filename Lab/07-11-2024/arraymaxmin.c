//Find the maximum and minimum of following numbers on screen  {3, 5, 6, 9, 8, 10, 100, -3, 0, 1} using for loop and array//

#include<stdio.h>
int main()


{
     int num[10]={3, 5, 6, 9, 8, 10, 100, -3, 0, 1}, i, max=num[0], min=num[0];

 
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
 
printf("Maximum= %d\n", max);
printf("Minimum= %d\n", min);

return 0;
}
