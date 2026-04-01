//Find dot product of two following interger array and display the result: a[5]={3, 5, -2, 10, 5}, b[5]={-11, 3, 6, 0, 1}//

#include<stdio.h>
int main()


{
     int a[5]={3, 5, -2, 10, 5}, b[5]={-11, 3, 6, 0, 1}, i, dot=0;
     for (int i=0; i<5; i++)
{
	dot = dot + a[i]*b[i]; //Dot product is multiplying and adding corresponding elements in a array
}
printf("Dot product= %d\n", dot);
return 0;
}
