//Write a programme in C to get the user input and find the area and perimeter of a square/rectangle
#include<stdio.h>
int main()
{ 
int length, breadth;
	
		printf("Enter length: %d", length);
			scanf("%d", &length);
		printf("Enter breadth: %d", breadth);
			scanf("%d", &breadth);
	
	printf("Area & Perimeter: \n");
	printf("Area: %d\n", length*breadth);
	printf("Perimeter: %d\n", 2*(length+breadth) );
	
return 0;
}
	
	

