/* Write a programme in C to enter the lenght  and breadth of a rectangle and calculate its peruimeter and area*/
#include<stdio.h>
int main()
{

	int l = 5, b = 6, area, perimeter;
	perimeter = 2*(l+b);
	area = l*b;
	
		printf("Perimeter = %d\nArea = %d\n", perimeter,area);\
	return 0;
} 
	
