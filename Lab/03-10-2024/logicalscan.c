//Logical operators
#include<stdio.h>
int main()
{
	int a, b, ret;

			printf("Give two numbers: ");
			scanf("%d%d", &a, &b);
		ret = ((a<=b)||(a!=b));
		printf("Return value of ((a<=b)||(a!=b)) expression is %d\n", ret); 
		ret = ((a<b)&&(a==b));
		printf("Return value of ((a<b)&&(a==b)) expression is %d\n", ret); 	
		ret = !((a<b)&& (a==b));
		printf("Return value of !((a<b)&& (a==b)) expression is %d\n", ret); 

return 0;

}
 
 
