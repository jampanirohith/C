//Logical operators
#include<stdio.h>
int main()
{
	int a=3, b=7, ret;

		ret = ((a<=b)||(a!=b));
		printf("Return value of ((a<=b)||(a!=b)) expression is %d\n", ret); 
		ret = ((a<b)&&(a==b));
		printf("Return value of ((a<b)&&(a==b)) expression is %d\n", ret); 	
		ret = !((a<b)&& (a==b));
		printf("Return value of !((a<b)&& (a==b)) expression is %d\n", ret); 

return 0;

}
 
 
